#pragma once
#include<iostream>
#include<string>



using namespace std;

class Ser
{
public:

	virtual void print() = 0;
	int pojemnosc;
	Ser(int p) : pojemnosc{p} {};
	virtual ~Ser() = default;
};


class Topiony : public Ser
{
public: 
	
	Topiony(int p, double c) : Ser{ p }, cena { c }{};
	void print() override
	{
		cout << this->rodzaj << " pojemnosc: " << pojemnosc << " cena: " << cena << endl;
	}

private:
	string rodzaj = "topiony";
	int pojemnosc = 100 ;
	double cena ;

};


class Bialy : public Ser
{
public:
	
	Bialy(int p, string t) : Ser{ p }, typ{ t }{};
	void print() override
	{
		cout << this->rodzaj  << " pojemnosc: " << pojemnosc << " typ: " << typ << endl;
	}

private:
	string rodzaj = "bialy";
	int pojemnosc = 100;
	string typ ;
};




