#pragma once
using namespace System::Drawing;

class CElipse
{
private:
	int x;
	int y;
	int r;
public:
	CElipse(int x, int y, int r)
	{
		this->x = x;
		this->y = y;
		this->r = r;
	}
	~CElipse(){}

	double getArea()
	{
		return 3.14*r*r;
	}

	void dibujar(Graphics ^g,Pen ^pincel)
	{
		g->DrawEllipse(pincel, x, y, r, r);
	}
};