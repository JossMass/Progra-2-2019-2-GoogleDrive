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
	char direccion;
	int vidas;
	int puntaje;

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
		direccion = 'S';
		vidas = 5;
		puntaje = 0;
	}

	~CPersonaje() {}

	void restarVidas() { vidas--; }
	void aumentarPuntaje(int v) { puntaje += v; }
	int getVidas() { return vidas; }
	int getPuntaje() { return puntaje; }
	void reiniciarPuntaje() { puntaje = 0; }
	

	void dibujar(Graphics ^g, Bitmap ^bmp)
	{
		Rectangle seccionMostrada = Rectangle(idX*ancho, idY*alto, ancho, alto);
		Rectangle zoom = Rectangle(x, y, ancho*1.0, alto*1.0);
		g->DrawImage(bmp, zoom, seccionMostrada, GraphicsUnit::Pixel);

	}

	void mover(char i, Graphics ^g)
	{
		switch (i)
		{
		case 'D':
			if (x + ancho*1.0 < g->VisibleClipBounds.Width)
			{
				idY = 2;
				x += dx;
				direccion = 'D';
			}
			break;
		case 'A':
			if (x > 0)
			{
				idY = 1;
				x -= dx;
				direccion = 'A';

			}
			break;
		case 'W':
			if (y > 0)
			{
				idY = 3;
				y -= dy;
				direccion = 'W';

			}
			break;
		case 'S':
			if (y + alto *1.0< g->VisibleClipBounds.Height)
			{
				idY = 0;
				y += dy;
				direccion = 'S';
			}
			break;
		}
		idX++;
		if (idX > 3)idX = 0;


	}

	char getDireccion() { return direccion; }
	int getX() { return x; }
	int getY() { return y; }
	Rectangle getRectangle() { return Rectangle(x, y, ancho, alto); }

};