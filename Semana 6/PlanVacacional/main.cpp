#include <iostream>
#include <conio.h>
#include <ctime>

#include "ArrPlanVacac.h"

using namespace std;

int main()
{
	srand(time(NULL));
	CArrPlanVacac *arreglo = new CArrPlanVacac();

	arreglo->Agregar();
	arreglo->Agregar();
	arreglo->Agregar();
	arreglo->Agregar();
	arreglo->Agregar();

	arreglo->ListarTodo();
	_getch();system("cls");
	arreglo->ListarBoletosDePlanVacac();
	_getch();system("cls");
	arreglo->ListarEnIntervaloFecha(1980, 2010);
	_getch();system("cls");
	arreglo->ListarPlanVacacMismoHotel("Marriot");

	_getch();
	return 0;
}