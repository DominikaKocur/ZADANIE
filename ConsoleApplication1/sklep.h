#pragma once

#include <iostream>
#include "ser.h"
#include <vector>

class Sklep
{
public:
	Sklep()
	{
		sery.push_back(new Topiony(100, 5));
		sery.push_back(new Bialy(100, "chudy"));
		sery.push_back(new Bialy(100, "poltlusty"));

	};
	~Sklep()
	{
		for (int i = 0; i < sery.size(); ++i) 
		{
			delete sery[i];
		};
	};
	void drukuj()
	{
		cout << "Lista serow:" << endl;
		for (int i = 0; i < sery.size(); ++i) 
		{
			sery[i]->print();
		};
	};
private :
	vector <Ser*> sery;
		
};