#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "CIngrediente.h"

using namespace std;

class CPastel
{
private:
	string Nombre;
	int CantidadPersonas;
	int Precio;
	vector<CIngrediente*> ListaIngredientes;

public:
	CPastel(string Nombre, int CantidadPersonas, int precio)
	{
		this->Nombre = Nombre;
		this->CantidadPersonas = CantidadPersonas;
		this->Precio = Precio;
	}

	~CPastel(){}

	void AgregarIngrediente(CIngrediente *v)
	{
		ListaIngredientes.push_back(v);
	}

	int TotalCantidadIngredientes()
	{
		return ListaIngredientes.size();
	}

	int CaloriasTotalesPastel()
	{
		int aux = 0;

		for (int i = 0;i < ListaIngredientes.size();i++)
		{
			aux += ListaIngredientes[i]->CaloriasDelIngrediente();
		}

		return aux;
	}

};