#pragma once
#include <string>
#include <iostream>
#include <ofApp.h>
class ResourceManager {
    public:
        ResourceManager();
        ~ResourceManager();

        ofMesh& loadMesh(std::string path);
        ofTexture& loadTexture(std::string path);
        ofShader& loadShader(std::string vertexPath, std::string fragmentPath);

    private:
        std::unordered_map<std::string, ofTexture> _textures;
        std::unordered_map<std::string, ofShader> _shaders;
        std::unordered_map<std::string, ofMesh> _meshes;

};
