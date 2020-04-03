#pragma once
#include <iostream>

using namespace System::Drawing;

class CCirculo
{
private:
	int x;
	int y;
	int r;
	int dx;
	int dy;
	int R, G, B;
	int contCaidas;

public:
	CCirculo()
	{
		x = rand() % 200 + 1;
		y = 1;
		dx = 10;
		dy = 10;
		r = 35;
		R = rand() % 256;
		G = rand() % 256;
		B = rand() % 256;
		contCaidas = 0;
	}

	~CCirculo() {}

	void CambiarColor()
	{
		R = rand() % 256;
		G = rand() % 256;
		B = rand() % 256;
	}

	void dibujar(Graphics ^g)
	{
		g->FillEllipse(gcnew SolidBrush(Color::FromArgb(R, G, B)), x, y, r, r);
	}

	void mover(int maxX, int barraY, int barraX, int barraMaxX)
	{
		if (x <= 0 || x + r >= maxX)
		{
			dx *= -1;
			CambiarColor();
		}
		if (y <= 0 || y + r >= barraY && barraX< x&& barraMaxX>x)
		{
			dy *= -1;
			CambiarColor();
		}
		if (y > barraY)
		{
			x = rand() % 200 + 1;
			y = 1;
			CambiarColor();
			contCaidas++;
		}

		x += dx;
		y += dy;
	}

	int getContadorCaidas()
	{
		return contCaidas;
	}
};