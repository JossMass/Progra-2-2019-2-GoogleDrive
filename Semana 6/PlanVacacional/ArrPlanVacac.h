#pragma once
#include <iostream>
#include <vector>
#include "PlanVacac.h"

using namespace std;

class CArrPlanVacac
{
private:
	vector<CPlanVacac*> vector;
	
public:
	CArrPlanVacac(){}
	~CArrPlanVacac() {}

	void Agregar()
	{
		CPlanVacac *aux = new CPlanVacac();
		vector.push_back(aux);
	}
	void Eliminar()
	{
		vector.pop_back();
	}

	void ListarEnIntervaloFecha(int anioa, int aniod)
	{
		for (int i = 0;i < vector.size();i++)
		{
			if (vector[i]->getAnio() > anioa && vector[i]->getAnio() < aniod)
			{
				vector[i]->getInfoPlanVacac();
				cout << endl;
			}
		}
	}

	void ListarPlanVacacMismoHotel(string hotel)
	{
		for (int i = 0;i < vector.size();i++)
		{
			if (vector[i]->getNombre() == hotel)
			{
				vector[i]->getInfoPlanVacac();
				cout << endl;
			}
		}
	}

	void ListarBoletosDePlanVacac()
	{
		for (int i = 0;i < vector.size();i++)
		{
			vector[i]->getInfoBoleto(); 
			cout << endl;
		}
	}

	void ListarTodo()
	{
		for (int i = 0;i < vector.size();i++)
		{
			vector[i]->getInfoPlanVacac();
			cout << endl;
		}
	}

};