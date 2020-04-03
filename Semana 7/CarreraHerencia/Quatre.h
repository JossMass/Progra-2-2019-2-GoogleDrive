#pragma once
#include <iostream>
#include "Vehiculo.h"

using namespace std;
using namespace System;

class CQuatre : public CVehiculo
{
public:
	CQuatre(int x1, int y1) :CVehiculo(x1, y1) {}
	~CQuatre() {}

	void dibujar()
	{
		if (modelo == 0)
		{
			ancho = 10;
			Console::SetCursorPosition(x, y);    cout << "____|~\\_ ";
			Console::SetCursorPosition(x, y + 1);cout << "[4x4_|_|-]";
			Console::SetCursorPosition(x, y + 2);cout << "(_)   (_) ";
		}

		if (modelo == 1)
		{
			ancho = 15;
			Console::SetCursorPosition(x, y);      cout << " _.-.___\\__   ";
			Console::SetCursorPosition(x, y + 1);  cout << "|  _      _`-. ";
			Console::SetCursorPosition(x, y + 2);  cout << "'-(_)----(_)--`";
		}
	}
};