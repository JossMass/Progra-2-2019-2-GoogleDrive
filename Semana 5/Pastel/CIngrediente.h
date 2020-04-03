#pragma once

#include <iostream>
#include <string>

using namespace std;

class CIngrediente
{
private:
	string Nombre;
	string UnidadMedida;
	int Cantidad;
	int CalxPorcion;

public:
	CIngrediente(string Nombre,string UnidadMedida,int Cantidad, int CalxPorcion)
	{
		this->Nombre = Nombre;
		this->UnidadMedida = UnidadMedida;
		this->Cantidad = Cantidad;
		this->CalxPorcion = CalxPorcion;
	}

	int CaloriasDelIngrediente()
	{
		int aux;
		aux = Cantidad * CalxPorcion;
		return aux;
	}
};