#include <iostream>
#include <conio.h>
#include <string>
#include <time.h>

#include "CArrEclipse.h"

using namespace std;


void Menu()
{
	cout << "1. Agregar Eclipse" << endl;
	cout << "2. Insertar Eclipse" << endl;
	cout << "3. Modificar tipo de eclipse" << endl;
	cout << "4. Eliminar Eclipse" << endl;
	cout << "5. Mostrar lista de eclipses" << endl;
	cout << "6. Reporte de eclipses vistos en Europa" << endl;
	cout << "7. Reporte de eclipses que ocasionaron sismos" << endl;
	cout << "8. Reporte de eclipses que se ocasionaron en la noche" << endl << endl;
}

int main()
{
	srand(time(NULL));
	int opcion, posicion;
	string tipo;
	CArrEclipse *arreglo = new CArrEclipse();

	while (1)
	{
		Menu();
		cout << "Ingrese su opcion: "; cin >> opcion;
		switch (opcion)
		{
		case 1: arreglo->Agregar(); cout << "Se agrego eclipse" << endl; break;
		case 2:
			cout << "Ingrese la posicion: "; cin >> posicion;
			arreglo->Insertar(posicion); cout << "Se inserto eclipse" << endl; break;
		case 3:
			cout << "Ingrese la posicion: "; cin >> posicion;
			cout << "Ingrese el nuevo valor: "; cin >> tipo;
			arreglo->ModificarTipoEclipse(posicion, tipo);
			cout << "Se modifico eclipse" << endl; break;
		case 4:
			cout << "Ingrese la posicion: "; cin >> posicion;
			arreglo->Eliminar(posicion); break;
		case 5: arreglo->MostrarVectorCompleto(); break;
		case 6: arreglo->EclipsesVisiblesEuropa(); break;
		case 7: arreglo->EclipsesOcasionaronSismo(); break;
		case 8: arreglo->EclipseEnlaNoche(); break;

		}
		_getch();
		system("cls");
	}
	_getch();
	return 0;
}