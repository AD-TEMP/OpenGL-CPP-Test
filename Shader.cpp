#include "Shader.h"

#include <fstream>
#include <sstream>

Shader::Shader(const char* vertexPath, const char* fragmentPath)
{
    std::ifstream vShaderFile;
    vShaderFile.open(vertexPath);

    std::stringstream vShaderStream;
    vShaderStream << vShaderFile.rdbuf();

    vShaderFile.close();

    std::string vertexCode = vShaderStream.str();
    vertex = vertexCode.c_str();

    std::ifstream fShaderFile;
    fShaderFile.open(fragmentPath);

    std::stringstream fShaderStream;
    fShaderStream << fShaderFile.rdbuf();

    fShaderFile.close();

    std::string fragmentCode = fShaderStream.str();
    fragment = fragmentCode.c_str();
}