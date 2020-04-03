#pragma once
#include <string>
#include <iostream>

#include "Boleto.h"
#include "Hotel.h"

using namespace std;

class CPlanVacac : public CBoleto, public CHotel
{
private:
	int duracion;
	int presupuesto;

public:
	CPlanVacac()
	{
		duracion = rand() % 8;
		presupuesto = rand() % 500000;
	}

	~CPlanVacac(){}

	void getInfoPlanVacac()
	{
		getInfoHotel();
		getInfoBoleto();
		cout << "Duracion: " << duracion << endl;
		cout << "Presupuesto: " << presupuesto << endl;
	}
};