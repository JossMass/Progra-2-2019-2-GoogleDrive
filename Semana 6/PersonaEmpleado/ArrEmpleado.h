#pragma once
#include <vector>
#include <iostream>
#include <string>

#include "Empleado.h"

using namespace std;

class CArrEmpleado
{
private:
	vector<CEmpleado*> arreglo;

public:
	CArrEmpleado(){}
	~CArrEmpleado(){}

	void AgregarAlFinal(CEmpleado *aux)
	{
		arreglo.push_back(aux);
	}

	void EliminarElUltimo()
	{
		arreglo.pop_back();
	}

	void Insertar(int posicion, CEmpleado *aux)
	{
		arreglo.insert(arreglo.begin() + posicion, aux);
	}

	void Eliminar(int posicion)
	{
		arreglo.erase(arreglo.begin() + posicion);
	}

	void getDatoPersonas()
	{
		for (int i = 0;i < arreglo.size();i++)
		{
			arreglo.at(i)->getInfoPersona();
		}
	}

	void getDatoEmpleado()
	{
		for (int i = 0;i < arreglo.size();i++)
		{
			arreglo.at(i)->getInfoEmpleado();
		}
	}
};