#pragma once
#include "C_Pencil.h"
class C_Pencil_Red :
    public C_Pencil
{
public:
    C_Pencil_Red() : C_Pencil(14, S_Color(255, 0, 0)){}
    void draw(std::ostream& out, const char* text);
};

