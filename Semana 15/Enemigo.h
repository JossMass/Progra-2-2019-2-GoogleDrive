#pragma once
#include <iostream>
#include "Movimiento.h"

class CEnemigo : public CMovimiento
{
private:
public:
	CEnemigo(int x, int y, int ancho, int alto) : CMovimiento(x, y, ancho, alto)
	{
		dx = dy = 20;
	}

	void mover(Graphics ^g)
	{
		int i = rand() % 4;

		if (i == 0 && x >= 0) {
			x -= dx;
			idy = 1;
		}
		if (i == 1 && x + ancho <= g->VisibleClipBounds.Width) {
			x += dx;
			idy = 2;
		}
		if (i == 2 && y >= 0) {
			y -= dy;
			idy = 3;
		}
		if (i == 3 && y + alto <= g->VisibleClipBounds.Height) {
			y += dy;
			idy = 0;
		}

		idx++;
		if (idx > 3)idx = 0;
	}
};