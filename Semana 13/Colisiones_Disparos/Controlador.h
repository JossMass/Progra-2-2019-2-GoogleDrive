#pragma once

#include <vector>
#include "Bala.h"
#include "Alfa.h"

using namespace std;

class CControlador
{
private:
	vector<CBala*>balas;
	vector<CAlfa*>alfas;
	int nalfas;
	CAlfa *auxalfa;
public:
	CControlador()
	{
		nalfas = 1 + rand() % 6;
	}
	~CControlador() {}

	void LlenarAlfas(int ancho, int alto)
	{
		for (int i = 0;i < nalfas;i++)
		{
			auxalfa = new CAlfa(ancho, alto);
			alfas.push_back(auxalfa);
		}
	}

	void AgregarBala(CBala *aux)
	{
		balas.push_back(aux);
	}

	void dibujarTodo(Graphics ^g, Bitmap ^bmpBala,Bitmap ^bmpAlfa)
	{
		for (int i = 0;i < balas.size();i++)
		{
			balas[i]->dibujar(g, bmpBala);
		}

		for (int i = 0;i < alfas.size();i++)
		{
			alfas[i]->dibujar(g, bmpAlfa);
		}
	}

	void moverTodo(Graphics ^g)
	{
		for (int i = 0;i < balas.size();i++)
		{
			balas[i]->mover(g);
		}

		for (int i = 0;i < alfas.size();i++)
		{
			alfas[i]->mover(g);
		}
	}

	void Colision(Graphics ^g)
	{
		//Verificacion
		for (int i = 0;i < balas.size();i++)
		{
			if (balas[i]->getX() <= 0 || balas[i]->getXAncho() >= g->VisibleClipBounds.Width
				|| balas[i]->getY() <= 0 || balas[i]->getYAlto() >= g->VisibleClipBounds.Height)
			{
				balas[i]->setVisible(false);
			}
		}

		for (int i = 0;i < alfas.size();i++)
		{
			for (int j = 0;j < balas.size();j++)
			{
				if (alfas[i]->getRectangle().IntersectsWith(balas[j]->getRectangle()))
				{
					alfas[i]->setVisible(false);
					balas[j]->setVisible(false);
				}
			}
		}

		//Eliminacion
		for (int i = 0;i < balas.size();i++)
		{
			if (!balas[i]->getVisible())
			{
				balas.erase(balas.begin() + i);
			}
		}

		for (int i = 0;i < alfas.size();i++)
		{
			if (!alfas[i]->getVisible())
			{
				alfas.erase(alfas.begin() + i);
			}
		}
	}
};