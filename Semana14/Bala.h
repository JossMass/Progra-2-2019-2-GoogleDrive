#pragma once

using namespace System::Drawing;

class CBala
{
private:
	int x;
	int y;
	int dx;
	int dy;
	int ancho;
	int alto;
	int direccion;
	bool visible;

public:
	CBala(int x, int y, int ancho, int alto, int direccion)
	{
		this->x = x;
		this->y = y;
		this->ancho = ancho;
		this->alto = alto;
		this->direccion = direccion;
		dx = 20;
		dy = 20;
		visible = true;
	}

	~CBala() {}

	void dibujar(Graphics^ g, Bitmap ^bmp)
	{
		g->DrawImage(bmp, x, y, ancho * 0.04, alto * 0.04);
	}

	void mover(Graphics^ g)
	{
		if (direccion == 'S' && y + alto*0.04 <= g->VisibleClipBounds.Height)
		{
			y += dy;
		}
		if (direccion == 'W' && y >= 0)
		{
			y -= dy;
		}
		if (direccion == 'A' && x >= 0)
		{
			x -= dx;
		}
		if (direccion == 'D' && x + ancho*0.04 <= g->VisibleClipBounds.Width)
		{
			x += dx;
		}
	}

	Rectangle getRectangle()
	{
		return Rectangle(x, y, ancho*0.04, alto*0.04);
	}

	int getX() { return x; }
	int getXAncho() { return x + ancho*0.04; }
	int getY() { return y; }
	int getYAlto() { return y + alto*0.04; }

	void setVisible(bool v) { visible = v; }
	bool getVisible() { return visible; }
};