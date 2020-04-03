#pragma once
#include <iostream>
#include <string>

using namespace std;

string Continentes[5] = { "America del Sur","Europa","Africa","America del Norte", "Asia" };
string Estilos[4] = { "Vintage","Barroco","Moderno","Simple" };
string Nombres[3] = { "Marriot","Wisen","Clausem" };
class CHotel
{
private:
	string nombre;
	string ubicacion;
	string estilo;

public:
	CHotel()
	{
		nombre = Nombres[rand() % 3];
		ubicacion = Continentes[rand() % 5];
		estilo = Estilos[rand() % 4];
	}

	~CHotel(){}

	string getNombre() { return nombre; }

	void getInfoHotel()
	{
		cout << "Nombre: " << nombre << endl;
		cout << "Ubicacion: " << ubicacion << endl;
		cout << "Estilo: " << estilo << endl;
	}
};