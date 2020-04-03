#pragma once

using namespace System::Drawing;

class CRectangulo
{
private:
	int x;
	int y;
	int dx;
	int ancho;
	int alto;

public:
	CRectangulo()
	{
		x = 1;
		y = 300;
		dx = 10;
		ancho = 200;
		alto = 7;
	}

	~CRectangulo() {}

	void dibujar(Graphics ^g)
	{
		g->FillRectangle(gcnew SolidBrush(Color::Blue), x, y, ancho, alto);
	}

	void mover(int anchoF, bool m)
	{
		if (x + ancho <= anchoF && m)
		{
			x += dx;
		}
		if (x >= 0 && !m)
		{
			x -= dx;
		}
	}

	int getX() { return x; }
	int getY() { return y; }
	int getMaxX() { return x + ancho; }
};