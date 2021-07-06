#pragma once
#include "S_Color.h"
#include <ostream>

class C_Pencil
{
protected:
	double len;
	S_Color color;
public:
	C_Pencil();
	C_Pencil(double len, S_Color color);

	void draw(std::ostream& out, const char* text);
	void grind_off();
};

