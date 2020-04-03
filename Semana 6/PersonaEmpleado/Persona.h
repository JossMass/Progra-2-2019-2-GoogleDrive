#pragma once
#include <iostream>
#include <string>

using namespace std;

class CPersona
{
protected:
	string nombre;
	int edad;
	char sexo;
	int dni;


public:
	CPersona(string _nombre, int _edad, char _sexo, int _dni)
	{
		nombre = _nombre;
		edad = _edad;
		sexo = _sexo;
		dni = _dni;
	}

	void getInfoPersona()
	{
		cout << "Nombre: " << nombre << endl;
		cout << "Edad: " << edad << endl;
		cout << "Sexo: " << sexo << endl;
		cout << "DNI: " << dni << endl;
	}
};