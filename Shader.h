#pragma once

class Shader
{
private:
public:
	const char* vertex;
	const char* fragment;

	Shader(const char* vertexPath, const char* fragmentPath);
};