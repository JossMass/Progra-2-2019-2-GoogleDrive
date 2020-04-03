#include <iostream>
#include <conio.h>

#include "ArrEmpleado.h"

using namespace std;

int main()
{
	CArrEmpleado *objarreglo = new CArrEmpleado();
	CEmpleado *empl1 = new CEmpleado("Daniel", 18, 'M', 136812, 950, "IBM", "Supervisor");
	CEmpleado *empl2 = new CEmpleado("Luis", 34, 'M', 32168, 2050, "Apple", "Supervisor");
	CEmpleado *empl3 = new CEmpleado("Maria", 20, 'F', 32168, 1025, "Wilson", "Directora");

	objarreglo->AgregarAlFinal(empl1);
	objarreglo->AgregarAlFinal(empl2);
	objarreglo->AgregarAlFinal(empl3);

	objarreglo->getDatoEmpleado();

	_getch();
	return 0;
}