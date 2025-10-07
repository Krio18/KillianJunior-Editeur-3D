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
        void loadPixelFile(std::string path);

    protected:
    private:
};
