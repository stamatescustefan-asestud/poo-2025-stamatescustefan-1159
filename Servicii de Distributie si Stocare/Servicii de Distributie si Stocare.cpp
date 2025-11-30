#include <iostream>
#include <cstring>

using namespace std;

class Colet {
private:
	int greutate;
	char* destinatar;
	char* adresaDestinatar;
	const int awb;
	static int numarTotalColete;
	char* descriereContinut;

public:
	//constructor fara parametrii
	Colet() : awb(++numarTotalColete) {
		this->greutate = 0;
		this->destinatar = new char[strlen("Necunoscut") + 1];
		strcpy_s(this->destinatar, strlen("Necunoscut") + 1, "Necunoscut");
		this->adresaDestinatar = new char[strlen("Necunoscuta") + 1];
		strcpy_s(this->adresaDestinatar, strlen("Necunoscut") + 1, "Necunoscuta");
		this->descriereContinut = new char[strlen("N/A") + 1];
		strcpy_s(this->descriereContinut, strlen("Necunoscut") + 1, "N/A");
	}
	//constructor cu 2 parametrii
	Colet(int greutate, const char* destinatar) : awb(++numarTotalColete) {
		this->greutate = greutate;
		this->destinatar = new char[strlen(destinatar) + 1];
		strcpy_s(this->destinatar, strlen(destinatar) + 1, destinatar);
		this->adresaDestinatar = new char[strlen("Nespecificata") + 1];
		strcpy_s(this->adresaDestinatar, strlen("Nespecificata") + 1, "Nespecificata");
		this->descriereContinut = new char[strlen("N/A") + 1];
		strcpy_s(this->descriereContinut, strlen("N/A") + 1, "N/A");
	}
	//constructor cu toti
	Colet(int greutate, const char* destinatar, const char* adresaNoua, const char* descriere) : awb(++numarTotalColete) {
		this->greutate = greutate;
		this->destinatar = new char[strlen(destinatar) + 1];
		strcpy_s(this->destinatar, strlen(destinatar) + 1, destinatar);
		this->adresaDestinatar = new char[strlen(adresaNoua) + 1];
		strcpy_s(this->adresaDestinatar, strlen(adresaNoua) + 1, adresaNoua);
		this->descriereContinut = new char[strlen(descriere) + 1];
		strcpy_s(this->descriereContinut, strlen(descriere) + 1, descriere);
	}
};

class Depozit {
private:
	char* oras;
	int capacitateMaximaColete;
	int numarZoneSortate;
	const int idDepozit;
	static char* numeCurier;
	int* angajatiZona;

public:
	//constructor fara parametrii
	Depozit() : idDepozit(rand() % 10000) {
		this->oras = new char[strlen("Necunoscut") + 1];
		strcpy_s(oras, strlen("Necunoscut") + 1, "Necunoscut");
		this->capacitateMaximaColete = 0;
		this->numarZoneSortate = 0;
		this->angajatiZona = new int[1];
		this->angajatiZona[0] = 0;
	}

	//constructor cu 2 parametrii
	Depozit(const char* oras, int capacitate) : idDepozit(rand() % 10000) {
		this->oras = new char[strlen(oras) + 1];
		strcpy_s(this->oras, strlen(oras) + 1, oras);
		this->capacitateMaximaColete = capacitate;
		this->numarZoneSortate = 1;
		this->angajatiZona = new int[1];
		this->angajatiZona[0] = 0;
	}

	//constructor cu toti parametrii
	Depozit(const char* oras, int capacitate, int zone, const int* angajati) : idDepozit(rand() % 10000)
	{
		this->oras = new char[strlen(oras) + 1];
		strcpy_s(this->oras, strlen(oras) + 1, oras);
		this->capacitateMaximaColete = capacitate;
		this->numarZoneSortate = zone;
		this->angajatiZona = new int[zone];
		for (int i = 0; i < zone; i++)
			this->angajatiZona[i] = angajati[i];
	}
};

class Comanda {
private:
	char* dataPlasare;
	char* status;
	int valoareRamburs;
	const int idComanda;
	static int taxaTransport;
	int* istoricDepozite;
	int numarDepoziteIstoric;
};

int main() {
	return 0;
}