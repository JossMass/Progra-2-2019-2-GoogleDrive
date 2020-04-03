#pragma once
#include <iostream>
#include <string>
#include "Fecha.h"
using namespace std;

class CBoleto
{
private:
	int codigo;
	int precio;
	CFecha fecha;

public:

	CBoleto()
	{
		codigo = rand() % 90000;
		precio = rand() % 2000;
		fecha = CFecha();
	}

	~CBoleto(){}

	int getAnio() { return fecha.getAnio(); }
	int getPrecio() { return precio; }
	int getCodigo() { return codigo; }

	void getInfoBoleto()
	{
		cout << "Boleto" << endl;
		cout << "Codigo: " << codigo << endl;
		cout << "Precio: " << precio << endl;
		cout << "Fecha: " << fecha.getFechaCompleta() << endl;
	}

};