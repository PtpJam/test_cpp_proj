#include "C_Pencil_Red.h"

void C_Pencil_Red::draw(std::ostream& out, const char* text)
{
	system("color 05");
	C_Pencil::draw(out, text);
	system("pause");
	system("color 0f");
}
