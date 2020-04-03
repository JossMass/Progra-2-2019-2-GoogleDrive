#pragma once

#include <vector>
#include "Elipse.h"
#include "Rectangulo.h"

using namespace System::Drawing;
using namespace std;

class CArrFiguras
{
private:
	vector<CElipse*> elipses;
	vector<CRectangulo*> rectangulos;

public:
	CArrFiguras(){}
	~CArrFiguras(){}

	void AgregarElipse(CElipse *aux)
	{
		elipses.push_back(aux);
	}

	void AgregarRectangulo(CRectangulo *aux)
	{
		rectangulos.push_back(aux);
	}

	void dibujarTodo(Graphics ^g, Pen ^pincel, SolidBrush ^brocha)
	{
		for (int i = 0;i < elipses.size();i++)
		{
			elipses.at(i)->dibujar(g, pincel);
		}
		for (int i = 0;i < rectangulos.size();i++)
		{
			rectangulos[i]->dibujar(g, brocha);
		}
	}
};