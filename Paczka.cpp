#include "Paczka.h"
#include <iostream>

using namespace std;

void Paczka::zmienAdresNadania(string adres)
{
	adres_nadawcy = adres;
}

int Paczka::podajKosztNadania()
{
	int temp = 0;
	if (this->waga < 10) temp = 20;
	else if (10 <= this->waga && this->waga <= 50) temp = 30;
	else temp = 50;

	return temp;
}

void Paczka::piszDane()
{
	cout << "Data nadania: " << data_nadania << endl;
	cout << "Adres nadawcy: " << adres_nadawcy << endl;
	cout << "Waga: " << waga << endl;
	cout << "Koszt: " << podajKosztNadania() << endl;

}

bool Paczka::operator==(Paczka& pakunek)
{
	if (this->waga == pakunek.waga && this->adres_nadawcy == pakunek.adres_nadawcy) return true;
	else return false;
}

Paczka::Paczka()
{
	cout << "Bez parametru " << endl;
}

Paczka::Paczka(string data_nadania, string adres_nadawcy, int waga)
{
	this->data_nadania = data_nadania;
	this->adres_nadawcy = adres_nadawcy;
	this->waga = waga;
}

Paczka::Paczka(string data_nadania, string adres_nadawcy)
{
	this->adres_nadawcy = adres_nadawcy;
	this->data_nadania = data_nadania;
}

Paczka::~Paczka()
{

}

istream& operator>>(istream& in, Paczka& p1)
{
	cout << "Podaj wage paczki: " << endl;
	in >> p1.waga;
	cout << "Podaj date nadania" << endl;
	in >> p1.data_nadania;
	cout << "Podaj adres nadawcy" << endl;
	in >> p1.adres_nadawcy;

	return in;
}
