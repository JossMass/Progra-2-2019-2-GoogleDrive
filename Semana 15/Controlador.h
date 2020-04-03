#pragma once

#include "Enemigo.h"
#include "Personaje.h"

class CControlador
{
private:
	CEnemigo *enemigo;
	CPersonaje *personaje;
	int tiempo;

public:
	CControlador(int x, int y,Bitmap^ bmpPersonaje, int vidas, Bitmap ^bmpEnemigo)
	{
		tiempo = 0;
		personaje = new CPersonaje(x, y, bmpPersonaje->Width / 4, bmpPersonaje->Height / 4, vidas);
		enemigo = new CEnemigo(500, 200, bmpEnemigo->Width / 4, bmpEnemigo->Height / 4);
	}

	~CControlador(){}

	void moverTodo(Graphics ^g)
	{
		enemigo->mover(g);
	}

	void dibujarTodo(Graphics ^g, Bitmap^ bmpPersonaje, Bitmap ^bmpEnemigo, Bitmap ^bmpMapa)
	{
		g->DrawImage(bmpMapa, 0, 0, bmpMapa->Width*2.5, bmpMapa->Height*1.5);
		personaje->dibujar(g, bmpPersonaje);
		enemigo->dibujar(g, bmpEnemigo);
	}

	void colision()
	{
		if (personaje->getRectangle().IntersectsWith(enemigo->getRectangle()))
		{
			personaje->restarVidas();
			personaje->setX(25);
			personaje->setY(25);
			enemigo->setX(500);
			enemigo->setY(200);
		}
	}

	CPersonaje* getPersonaje() { return personaje; }
	int getTiempo() { return tiempo; }
	void aumentarTiempo() { tiempo++; }
};