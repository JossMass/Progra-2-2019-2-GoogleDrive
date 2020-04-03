#pragma once
#include <iostream>
#include <string>

#include "Persona.h"

using namespace std;

class CEmpleado : public CPersona
{
private:
	int sueldo;
	string empresa;
	string cargo;

public:
	CEmpleado(string _nombre, int _edad, char _sexo, int _dni,int sueldo, string empresa, string cargo) :
		CPersona(_nombre, _edad,  _sexo, _dni)
	{
		this->empresa = empresa;
		this->cargo = cargo;
		this->sueldo = sueldo;
	}

	void getInfoEmpleado()
	{
		getInfoPersona();
		cout << "Empresa: " << empresa << endl;
		cout << "Cargo: " << cargo << endl;
		cout << "Sueldo: " << sueldo << endl << endl;
	}
};