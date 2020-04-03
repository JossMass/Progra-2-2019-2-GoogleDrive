#include <iostream>
#include <string>
#include <conio.h>

#include "CPastel.h"

using namespace std;

int main()
{
	CIngrediente *i1 = new CIngrediente("Harina", "Gramos", 15, 2000);
	CIngrediente *i2 = new CIngrediente("Leche", "Litros", 1, 600);
	CIngrediente *i3 = new CIngrediente("Huevo", "Kg", 1, 1200);

	CPastel *Pastel = new CPastel("TresLeches", 3, 60);

	Pastel->AgregarIngrediente(i1);
	Pastel->AgregarIngrediente(i2);
	Pastel->AgregarIngrediente(i3);

	cout << "La cantidad de ingredientes de pastel son: " << Pastel->TotalCantidadIngredientes() << endl;
	cout << "El total de calorias del pastel son: " << Pastel->CaloriasTotalesPastel();




	_getch();
	return 0;
}