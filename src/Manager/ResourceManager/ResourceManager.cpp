#include "Manager/ResourceManager/ResourceManager.hpp"

ResourceManager::ResourceManager()
{
}

ResourceManager::~ResourceManager()
{
}

ofMesh& ResourceManager::loadMesh(std::string path) {
    ofMesh mesh;
    mesh.load(path);
    return mesh;
}

ofTexture& ResourceManager::loadTexture(std::string path) {
    ofImage img;
    img.load(path);
    ofTexture tex = img.getTexture();
    return tex;
}

ofShader& ResourceManager::loadShader(std::string vertexPath, std::string fragmentPath) {
    ofShader shader;
    shader.load(vertexPath, fragmentPath);
    return shader;
}


// void ResourceManager::loadPixelFile(std::string path) {
//     int width, height, channels;
//     unsigned char* data = stbi_load(path.c_str(), &width, &height, &channels, 0);

//     if (!data) {
//         std::cerr << "Failed to load texture for path" << path << std::endl;
//         return;
//     }
// }