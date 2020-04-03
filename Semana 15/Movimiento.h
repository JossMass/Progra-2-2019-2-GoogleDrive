#pragma once

using namespace System::Drawing;

class CMovimiento
{
protected:
	int x, y;
	int dx, dy;
	int idx, idy;
	int ancho, alto;

public:
	CMovimiento(int x, int y, int ancho, int alto)
	{
		this->x = x;
		this->y = y;
		this->ancho = ancho;
		this->alto = alto;
		idx = idy = 0;
	}

	~CMovimiento() {}

	void dibujar(Graphics^g, Bitmap^bmp)
	{
		Rectangle seccionUsar = Rectangle(idx*ancho, idy*alto, ancho, alto);
		Rectangle zoom = Rectangle(x, y, ancho*1.0, alto*1.0);
		g->DrawImage(bmp, zoom, seccionUsar, GraphicsUnit::Pixel);
	}

	virtual void mover(Graphics ^g, char i = 0) {};

	Rectangle getRectangle() { return Rectangle(x, y, ancho*1.0, alto*1.0); }

	void setX(int v) { x = v; }
	void setY(int v) { y = v; }


};