#pragma once
#include <iostream>

using namespace std;
using namespace System;

class CVehiculo
{
protected:
	int x;
	int y;
	int modelo;
	int victorias;
	int puesto;
	bool llego;
	int ancho;

public:
	CVehiculo(int x, int y)
	{
		this->x = x;
		this->y = y;
		modelo = rand() % 2;
		victorias = 0;
		puesto = 0;
		llego = false;
		ancho = 0;
	}
	~CVehiculo(){}

	int getX() { return x; }
	int getY() { return y; }
	int getModelo() { return modelo; }
	int getVictorias() { return victorias; }
	int getPuesto() { return puesto; }
	bool getLlego() { return llego; }

	void setX(int v) { x = v; }
	void setY(int v) { y = v; }
	void setModelo(int v) { modelo = v; }
	void setVictorias(int v) { this->victorias = v; }
	void setLlego(bool v) { llego = v; }
	void setPuesto(int v) { puesto = v; }


	void AumentoVictoria() { this->victorias++; }

	void mover()
	{
		if (x + ancho <= 70)x = x + rand() % 3 + 1;
		else llego = true;
	}

	virtual void dibujar() = 0;
};