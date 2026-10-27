#include<iostream>
using namespace std;

class Produs {
public:
	float pret;
	int stoc;

	void afiseaza() {
		cout << "Pret: " << pret << " lei" << endl;
		cout << "Stoc: " << stoc << " bucati" << endl;
	}

	float calculeazaValoareStoc() {
		return pret * stoc;
	}
};

int main() {
	Produs pix;

	pix.pret = 3.5f;
	pix.stoc = 50;

	pix.afiseaza();

	float valoarePixuri = pix.calculeazaValoareStoc();
	cout << "Valoarea pixurilor: " << valoarePixuri << " lei" << endl;

	Produs caiet;

	caiet.pret = 12.5f;
	caiet.stoc = 20;

	caiet.afiseaza();

	return 0;
}