#pragma once

using namespace System::Drawing;

class CPersonaje
{
private:
	int x;
	int y;
	int dx;
	int dy;
	int idX;
	int idY;
	int ancho;
	int alto;

public:
	CPersonaje(int ancho, int alto)
	{
		this->ancho = ancho;
		this->alto = alto;
		x = 70;
		y = 70;
		dx = 10;
		dy = 10;
		idX = 0;
		idY = 0;
	}

	~CPersonaje() {}

	void dibujar(Graphics ^g, Bitmap ^bmp)
	{
		Rectangle seccionMostrada = Rectangle(idX*ancho, idY*alto, ancho, alto);
		Rectangle zoom = Rectangle(x, y, ancho*0.2, alto*0.2);
		g->DrawImage(bmp, zoom, seccionMostrada, GraphicsUnit::Pixel);

	}

	void mover(char i, Graphics ^g)
	{
		switch (i)
		{
		case 'D':
			if (x + ancho*0.2 < g->VisibleClipBounds.Width)
			{
				idY = 2;
				x += dx;
			}
			break;
		case 'A':
			if (x > 0)
			{
				idY = 1;
				x -= dx;
			}
			break;
		case 'W':
			if (y > 0)
			{
				idY = 3;
				y -= dy;
			}
			break;
		case 'S':
			if (y + alto *0.2 < g->VisibleClipBounds.Height)
			{
				idY = 0;
				y += dy;
			}
			break;
		}
		if (++idX > 3)idX = 0;

		


	}
};