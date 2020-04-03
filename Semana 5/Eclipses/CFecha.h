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
		a = rand() % 2020;
	}

	~CFecha() {}

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