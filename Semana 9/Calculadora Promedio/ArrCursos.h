#pragma once
#include <iostream>
#include <vector>
#include "Curso.h"

using namespace std;

class CArrCursos
{
private:
	vector<CCurso*>lista;

public:
	CArrCursos(){}

	void AgregarCurso(CCurso* curso)
	{
		lista.push_back(curso);
	}

	double CalcularPromedio()
	{
		int numerador = 0;
		int denominador = 0;

		for (int i = 0;i < lista.size();i++)
		{
			numerador += lista.at(i)->getNota()*lista[i]->getCredito();
			denominador += lista.at(i)->getCredito();
		}

		return double(numerador) / denominador;
	}
};