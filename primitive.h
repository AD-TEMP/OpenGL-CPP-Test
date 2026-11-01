#pragma once

class Primitive
{
private:
public:
	Primitive(float& vertices);

	static Primitive Circle();

	static Primitive Triangle();
};