#pragma once

#include <iostream>

using namespace System::Drawing;

int num[2] = { 10,-10 };

class CAlfa
{
private:
	int x;
	int y;
	int dx;
	int idX;
	int idY;
	int ancho;
	int alto;
	bool visible;
	char direccion;

public:
	CAlfa(int ancho, int alto)
	{
		this->ancho = ancho;
		this->alto = alto;
		x = rand() % 400;
		y = rand() % 400;
		dx = num[rand() % 2];
		idX = 0;
		idY = 1;
		visible = true;
	}

	~CAlfa() {}

	void dibujar(Graphics ^g, Bitmap ^bmp)
	{
		Rectangle seccionMostrada = Rectangle(idX*ancho, idY*alto, ancho, alto);
		Rectangle zoom = Rectangle(x, y, ancho*1.0, alto*1.0);
		g->DrawImage(bmp, zoom, seccionMostrada, GraphicsUnit::Pixel);

	}

	void mover(Graphics ^g)
	{
		if (x + ancho*1.0 >= g->VisibleClipBounds.Width)dx *= -1;
		if (x <= 0)dx *= -1;

		if (dx > 0)
		{
			direccion = 'D';
			idY = 2;
		}
		if (dx < 0) {
			direccion = 'A';
			idY = 1;
		}

		idX++;
		if (idX > 3)idX = 0;
		x += dx;
	}

	int getX() { return x; }
	int getY() { return y; }

	Rectangle getRectangle()
	{
		return Rectangle(x, y, ancho*1.0, alto*1.0);
	}

	void setVisible(bool v) { visible = v; }
	bool getVisible() { return visible; }
	char getDireeccion() { return direccion; }
};