#pragma once
struct S_Color {
	short red;
	short green;
	short blue;
	S_Color() {
		this->red = this->green = this->blue = 0;
	}
	S_Color(short red, short green, short blue) {
		this->red = red;
		this->green = green;
		this->blue = blue;
	}
};