#pragma once

#include <iostream>
#include <string>

using namespace std;

class CHora
{
private:
	int h, m, s;
public:
	CHora()
	{
		h = rand() % 24;
		m = rand() % 60;
		s = rand() % 60;
	}

	~CHora() {}

	int getHora() { return h; }

	string getHoraCompleta()
	{
		string aux;

		aux.append(to_string(h));
		aux.append(":");
		aux.append(to_string(m));
		aux.append(":");
		aux.append(to_string(s));

		return aux;
	}
};