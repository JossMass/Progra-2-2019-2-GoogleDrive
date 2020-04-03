#pragma once

using namespace System::Drawing;

class CRectangulo
{
private:
	int x;
	int y;
	int ancho;
	int alto;

public:
	CRectangulo(int x, int y, int alto, int ancho)
	{
		this->x = x;
		this->y = y;
		this->alto = alto;
		this->ancho = ancho;
	}
	~CRectangulo(){}

	double getArea()
	{
		return ancho*alto;
	}

	void dibujar(Graphics ^g, SolidBrush ^brocha)
	{
		g->FillRectangle(brocha, x, y, ancho, alto);
	}
};