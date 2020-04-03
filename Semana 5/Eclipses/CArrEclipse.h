#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "CEclipse.h"

class CArrEclipse
{
private:
	vector<CEclipse*> arreglo;
public:
	CArrEclipse() {}
	~CArrEclipse() {}

	void Agregar()
	{
		CEclipse *aux = new CEclipse();
		arreglo.push_back(aux);
	}

	void Insertar(int posicion)
	{
		CEclipse *aux = new CEclipse();
		arreglo.insert(arreglo.begin() + posicion, aux);
	}

	void ModificarTipoEclipse(int posicion, string v)
	{
		arreglo.at(posicion)->setTipo(v);
	}

	void Eliminar(int posicion)
	{
		arreglo.erase(arreglo.begin() + posicion);
	}

	void EliminarAlFinal()
	{
		arreglo.pop_back();
	}

	void MostrarVectorCompleto()
	{
		for (int i = 0;i < arreglo.size();i++)
		{
			arreglo[i]->MostrarInfo();
		}
	}

	void EclipsesVisiblesEuropa()
	{
		for (int i = 0;i < arreglo.size();i++)
		{
			if (arreglo[i]->getVisibilidad() == "Europa")
			{
				arreglo[i]->MostrarInfo();
			}
		}
	}

	void EclipsesOcasionaronSismo()
	{
		for (int i = 0;i < arreglo.size();i++)
		{
			if (arreglo[i]->getSismo() == "Si")
			{
				arreglo[i]->MostrarInfo();
			}
		}
	}

	void EclipseEnlaNoche()
	{
		for (int i = 0;i < arreglo.size();i++)
		{
			if (arreglo[i]->getHora() >= 18)
			{
				arreglo[i]->MostrarInfo();
			}
		}
	}


};