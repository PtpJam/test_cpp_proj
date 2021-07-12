#pragma once
class C_Eraser
{
private:
	double cost;
	int rigidit;
public:
	C_Eraser() : cost(0), rigidit(1){}
	C_Eraser(double cost, int rigidit) : cost(cost), rigidit(rigidit) {}

};

