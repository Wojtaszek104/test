
#include <string>
using namespace std;

class Paczka
{
private:
	int waga = 0;
	string adres_nadawcy;
	string data_nadania;

public:
	void zmienAdresNadania(string adres);
	int podajKosztNadania();
	void piszDane();
	friend istream& operator >>(istream& in, Paczka& p1);
	bool operator ==(Paczka& pakunek);

	

	Paczka();
	Paczka(string data_nadania, string adres_nadawcy, int waga);
	Paczka(string data_nadania, string adres_nadawcy);
	~Paczka();
};

