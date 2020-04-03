#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

class CArchivo
{
private:
	ofstream archivoEscribir;
	ifstream archivoLeer;
	int x, y, vidas, tiempo;
	string aux;
public:
	CArchivo(){}
	~CArchivo(){}

	void CargarDatos()
	{
		archivoLeer.open("configuracion.txt", ios::in);

		if (archivoLeer.fail())
		{
			archivoLeer.close();
			archivoEscribir.open("configuracion.txt", ios::out);

			archivoEscribir << "25" << endl;
			archivoEscribir << "25" << endl;
			archivoEscribir << "7" << endl;
			archivoEscribir << "15" << endl;

			archivoEscribir.close();
			archivoLeer.open("configuracion.txt", ios::in);

		}

		getline(archivoLeer, aux);
		x = atoi(aux.c_str());
		getline(archivoLeer, aux);
		y = atoi(aux.c_str());
		getline(archivoLeer, aux);
		vidas = atoi(aux.c_str());
		getline(archivoLeer, aux);
		tiempo = atoi(aux.c_str());

		archivoLeer.close();
	}

	int getX() { return x; }
	int getY() { return y; }
	int getVidas() { return vidas; }
	int getTiempo() { return tiempo; }

};