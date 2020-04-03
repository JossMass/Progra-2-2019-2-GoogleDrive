#pragma once

#include <vector>
#include "Bala.h"
#include "Alfa.h"
#include "Personaje.h"

using namespace std;

class CControlador
{
private:
	vector<CBala*>balas;
	vector<CAlfa*>alfas;
	vector<CBala*>balasEnemigas;
	CAlfa *auxalfa;
	CPersonaje *personaje;
public:
	CControlador(Bitmap ^bmpPersonaje)
	{
		personaje = new CPersonaje(bmpPersonaje->Width / 4, bmpPersonaje->Height / 4);
	}
	~CControlador() {}

	CPersonaje *getPersonaje()
	{
		return personaje;
	}

	vector<CAlfa*> getAlfas() { return alfas; }

	void LlenarAlfas(int ancho, int alto, int nalfas)
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

	void AgregarBalaEnemiga(CBala *aux)
	{
		balasEnemigas.push_back(aux);
	}

	void dibujarTodo(Graphics ^g, Bitmap ^bmpBala, Bitmap ^bmpAlfa, Bitmap ^bmpPersonaje, Bitmap^ bmpmapa)
	{
		g->DrawImage(bmpmapa, 0, 0, bmpmapa->Width*2.3, bmpmapa->Height*1.8);
		for (int i = 0;i < balas.size();i++)
		{
			balas[i]->dibujar(g, bmpBala);
		}

		for (int i = 0;i < alfas.size();i++)
		{
			alfas[i]->dibujar(g, bmpAlfa);
		}

		for (int i = 0;i < balasEnemigas.size();i++)
		{
			balasEnemigas[i]->dibujar(g, bmpBala);
		}
		personaje->dibujar(g, bmpPersonaje);
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
		for (int i = 0;i < balasEnemigas.size();i++)
		{
			balasEnemigas[i]->mover(g);
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

		for (int i = 0;i < balasEnemigas.size();i++)
		{
			if (balasEnemigas[i]->getX() <= 0 || balasEnemigas[i]->getXAncho() >= g->VisibleClipBounds.Width
				|| balasEnemigas[i]->getY() <= 0 || balasEnemigas[i]->getYAlto() >= g->VisibleClipBounds.Height)
			{
				balasEnemigas[i]->setVisible(false);
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
					personaje->aumentarPuntaje(10);
				}
			}
		}

		for (int i = 0;i < alfas.size();i++)
		{
			if (personaje->getRectangle().IntersectsWith(alfas[i]->getRectangle()))
			{
				alfas[i]->setVisible(false);
				personaje->restarVidas();
				personaje->aumentarPuntaje(1);

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

		for (int i = 0;i < balasEnemigas.size();i++)
		{
			if (!balasEnemigas[i]->getVisible())
			{
				balasEnemigas.erase(balasEnemigas.begin() + i);
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

	void LimpiarAlfas()
	{
		alfas.clear();
	}

	void CambioDeNivel(Bitmap ^bmppersonaje, Bitmap ^bmpenemigo, int nalfas)
	{
		LimpiarAlfas();
		LlenarAlfas(bmpenemigo->Width / 4, bmpenemigo->Height / 4, nalfas);
		personaje = new CPersonaje(bmppersonaje->Width/4, bmppersonaje->Height/4);
		personaje->reiniciarPuntaje();
	}
     bool CerrarFormulario()
	{
		 if (personaje->getVidas()==0)
		 {
			 return 1;
		 }
		 else
		 {
			 return 0;
		 }
	}
};