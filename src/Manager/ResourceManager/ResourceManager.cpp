#include "Manager/ResourceManager/ResourceManager.hpp"

ResourceManager::ResourceManager()
{
}

ResourceManager::~ResourceManager()
{
}

ofMesh& ResourceManager::loadMesh(std::string path) {
    if (this->_meshes.find(path) == this->_meshes.end()) {
        ofMesh mesh;
        mesh.load(path);
        this->_meshes[path] = mesh;
    }
    return this->_meshes[path];
}

ofTexture& ResourceManager::loadTexture(std::string path) {

    ofDisableArbTex();
    auto it = this->_textures.find(path);
    if (it != this->_textures.end()) {
        return it->second;
    }

    ofImage img;
    if (!img.load(path)) {
        ofLogError() << "Failed to load texture: " << path;
        static ofTexture dummy;
        return dummy;
    }

    std::cout << "Loaded " << path << ", size: " << img.getWidth() << "x" << img.getHeight() << std::endl;

    auto [insertedIt, success] = this->_textures.emplace(path, ofTexture());
    ofTexture& tex = insertedIt->second;

    tex.allocate(img.getWidth(), img.getHeight(), GL_RGBA);
    tex.loadData(img.getPixels());

    return tex;
}

ofShader& ResourceManager::loadShader(std::string vertexPath, std::string fragmentPath) {
    std::string key = vertexPath + "|" + fragmentPath;

    if (this->_shaders.find(key) == this->_shaders.end()) {
        ofShader shader;
        shader.setupShaderFromFile(GL_VERTEX_SHADER, vertexPath);
        shader.setupShaderFromFile(GL_FRAGMENT_SHADER, fragmentPath);

        shader.bindDefaults();
        shader.linkProgram();
        if (!shader.isLoaded()) {
            ofLogError() << "Shader failed to load!";
        }
        this->_shaders[key] = shader;
    }

    return this->_shaders[key];
}
