#pragma once
#include <iostream>
#include "Vehiculo.h"

using namespace std;
using namespace System;

class CDynamic : public CVehiculo
{
public:
	CDynamic(int x1, int y1) :CVehiculo(x1, y1) {}
	~CDynamic(){}

	void dibujar()
	{
		if (modelo == 0)
		{
			ancho = 5;
			Console::SetCursorPosition(x, y);    cout << "__   ";
			Console::SetCursorPosition(x, y + 1);cout << "|_\\_";
			Console::SetCursorPosition(x, y + 2);cout << "Lo_oJ";
		}

		if (modelo == 1)
		{
			ancho = 10;
			Console::SetCursorPosition(x, y);    cout << "   __     ";
			Console::SetCursorPosition(x, y + 1);cout << " _| =\\__ ";
			Console::SetCursorPosition(x, y + 2);cout << "/o____o_\\";
		}
	}
};