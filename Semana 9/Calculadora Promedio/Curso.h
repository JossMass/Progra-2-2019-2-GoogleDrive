#pragma once
#include <iostream>

using namespace std;

class CCurso
{
private:
	int nota;
	int credito;

public:
	CCurso()
	{
		nota = 0;
		credito = 0;
	}

	CCurso(int nota, int credito)
	{
		this->nota = nota;
		this->credito = credito;
	}

	void setNota(int v) { nota = v; }
	void setCredito(int v) { credito = v; }

	int getNota() { return nota; }
	int getCredito() { return credito; }

};