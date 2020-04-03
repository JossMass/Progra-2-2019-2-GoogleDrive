#include <iostream>
#include "Competencia.h"
#include <conio.h>
#include <ctime>


using namespace std;
using namespace System;

int main()
{
	srand(time(NULL));
	Console::SetWindowSize(100, 25);
	CCompetencia compe = CCompetencia();

	char tecla;

	while (1)
	{
		compe.dibujarTodo();
		compe.moverTodo();
		_sleep(150);

		if (_kbhit())
		{
			tecla = _getch();
			if (tecla == 32)
			{
				compe.OtraVez();
			}

			if (tecla == 27)
			{
				Console::Clear();
				break;
			}
		}
	}

	compe.RankingFinal();

	_getch();
	return 0;
}