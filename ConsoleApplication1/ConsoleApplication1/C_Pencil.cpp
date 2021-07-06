#include "C_Pencil.h"

C_Pencil::C_Pencil()
{
	S_Color color;
	color.red = color.green = color.blue = 0;
	this->color = color;
	this->len = 14;
}

C_Pencil::C_Pencil(double len, S_Color color)
{
	this->color = color;
	this->len = len;
}

void C_Pencil::draw(std::ostream& out, const char* text)
{
	out << "Pencil of color in rgb(" << 
		this->color.red << "," <<
		this->color.green << "," <<
		this->color.blue << ")" << 
		" draw \"" << text << "\"\n";
}

void C_Pencil::grind_off()
{
	this->len -= 0.01;
}
