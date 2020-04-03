#pragma once

#include "Movimiento.h"

class CPersonaje : public CMovimiento
{
private:
	int vidas;

public:
	CPersonaje(int x, int y, int ancho, int alto, int vidas) : CMovimiento(x, y, ancho, alto)
	{
		this->vidas = vidas;
		dx = dy = 10;
	}

	~CPersonaje(){}

	void mover(Graphics ^g, char i)
	{
		if (i == 'A' && x >= 0) {
			x -= dx;
			idy = 1;
		}
		if (i == 'D' && x + ancho <= g->VisibleClipBounds.Width) {
			x += dx;
			idy = 2;
		}
		if (i == 'W' && y >= 0) {
			y -= dy;
			idy = 3;
		}
		if (i == 'S' && y + alto <= g->VisibleClipBounds.Height) {
			y += dy;
			idy = 0;
		}

		idx++;
		if (idx > 3)idx = 0;
	}

	int getVidas() { return vidas; }
	void restarVidas() { vidas--; }
};