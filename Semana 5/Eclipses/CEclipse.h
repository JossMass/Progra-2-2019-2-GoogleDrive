#pragma once

#include <iostream>
#include <string>
#include "CFecha.h"
#include "CHora.h"

using namespace std;

string Tipos[2] = { "Solar","Lunar" };
string Enunciados[2] = { "Si","No" };
string Continentes[5] = { "America del Sur","America del Norte","Europa","Asia","Africa" };

class CEclipse
{
private:
	string Tipo;
	CFecha Fecha;
	CHora Hora;
	string Sismo;
	string Lluvia;
	string Visibilidad;

public:
	CEclipse()
	{
		Tipo = Tipos[rand() % 2];
		Fecha = CFecha();
		Hora = CHora();
		Sismo = Enunciados[rand() % 2];
		Lluvia = Enunciados[rand() % 2];
		Visibilidad = Continentes[rand() % 5];
	}

	~CEclipse(){}

	void setTipo(string v) { Tipo = v; }
	string getTipo() { return Tipo; }

	string getVisibilidad() { return Visibilidad; }
	string getSismo() { return Sismo; }

	int getHora() { return Hora.getHora(); }

	void MostrarInfo()
	{
		cout << "Tipo: " << Tipo << endl;
		cout << "Fecha: " << Fecha.getFechaCompleta() << endl;
		cout << "Hora: " << Hora.getHoraCompleta() << endl;
		cout << "Sismo: " << Sismo << endl;
		cout << "Lluvia: " <<  Lluvia << endl;
		cout << "Visibilidad: " << Visibilidad << endl << endl;
	}
};