#pragma once
#include <iostream>
#include "Vehiculo.h"

using namespace std;
using namespace System;

class CLeger : public CVehiculo
{
public:
	CLeger(int x1, int y1) :CVehiculo(x1, y1) {}
	~CLeger() {}

	void dibujar()
	{
		if (modelo == 0)
		{
			ancho = 10;
			Console::SetCursorPosition(x, y);    cout << "__        ";
			Console::SetCursorPosition(x, y + 1);cout << ".-'--`-._ ";
			Console::SetCursorPosition(x, y + 2);cout << "'-O---O--'";
		}

		if (modelo == 1)
		{
			ancho = 10;
			Console::SetCursorPosition(x, y);    cout << "          ";
			Console::SetCursorPosition(x, y + 1);cout << ".-'--`-._ ";
			Console::SetCursorPosition(x, y + 2);cout << "'-O---O--'";
		}
	}
};