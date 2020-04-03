#pragma once
#include <iostream>
#include "Dynamic.h"
#include "Leger.h"
#include "Quatre.h"

using namespace std;
using namespace System;

class CCompetencia
{
private:
	int cont;
	CDynamic *auto1;
	CLeger *auto2;
	CQuatre *auto3;

public:
	CCompetencia()
	{
		cont = 0;
		auto1 = new CDynamic(0, 0);
		auto2 = new CLeger(0, 7);
		auto3 = new CQuatre(0, 14);
	}

	void dibujarTodo()
	{
		Console::Clear();
		auto1->dibujar();
		auto2->dibujar();
		auto3->dibujar();

		for (int i = 0;i <= 20;i++)
		{
			Console::SetCursorPosition(70, i);cout << "|";
		}
	}

	void moverTodo()
	{
		if (auto1->getLlego() && auto1->getPuesto() == 0)
		{
			auto1->setPuesto(++cont);
			if (auto1->getPuesto() == 1)auto1->AumentoVictoria();
		}
		else auto1->mover();
		
		if (auto2->getLlego() && auto2->getPuesto() == 0)
		{
			auto2->setPuesto(++cont);
			if (auto2->getPuesto() == 1)auto2->AumentoVictoria();
		}
		else auto2->mover();

		if (auto3->getLlego() && auto3->getPuesto() == 0)
		{
			auto3->setPuesto(++cont);
			if (auto3->getPuesto() == 1)auto3->AumentoVictoria();
		}
		else auto3->mover();
	}

	void OtraVez()
	{
		cont = 0;
		auto1->setX(0);auto1->setY(0);
		auto1->setLlego(false); auto1->setPuesto(0);
		auto2->setX(0);auto2->setY(7);
		auto2->setLlego(false); auto2->setPuesto(0);
		auto3->setX(0);auto3->setY(14);
		auto3->setLlego(false); auto3->setPuesto(0);
	}

	void RankingFinal()
	{
		cout << "El numero de victorias por vehiculo es: " << endl;
		cout << "Dynamic: " << auto1->getVictorias() << endl;
		cout << "Leger: " << auto2->getVictorias() << endl;
		cout << "Quatre: " << auto3->getVictorias() << endl;
	}
};