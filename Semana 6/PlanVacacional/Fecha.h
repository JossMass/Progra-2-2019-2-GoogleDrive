#pragma once
#include <iostream>
#include <string>

using namespace std;

class CFecha
{
private:
	int d, m, a;

public:
	CFecha()
	{
		d = rand() % 31;
		m = rand() % 13;
		a = 1950 + rand() % 70;
	}

	~CFecha() {}

	int getDia() { return d; }
	int getMes() { return m; }
	int getAnio() { return a; }

	string getFechaCompleta()
	{
		string aux;
		aux.append(to_string(d));
		aux.append("/");
		aux.append(to_string(m));
		aux.append("/");
		aux.append(to_string(a));

		return aux;
	}
};