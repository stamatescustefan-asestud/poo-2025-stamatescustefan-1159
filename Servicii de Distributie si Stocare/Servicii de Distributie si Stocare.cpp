#include <iostream>

using namespace std;

class Colet {
public:
	int greutate;
	string destinatar;
	string adresaDestinatar;
	const int awb;
	static int numarTotalColete;
	char* descriereContinut;
};

class Depozit {
public:
	string oras;
	int capacitateMaximaColete;
	int numarZoneSortate;
	const int idDepozit;
	static string numeCurier;
	int* angajatiZona;
};

class Comanda {
public:
	string dataPlasare;
	string status;
	int valoareRamburs;
	const int idComanda;
	static int taxaTransport;
	int* istoricDepozite;
	int numarDepoziteIstoric;
};