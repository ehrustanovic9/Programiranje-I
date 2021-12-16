#include < iostream >
#include < iomanip >

using namespace std;

/*

Zadatak:

Napi�ite program, po�tuju�i sve faze procesa programiranja, koji ra�una sumu znamenki
unesenog cijelog broja.

Upute:

Ostatak cjelobrojnog dijeljenja bilo kojeg broja sa 10 jednak je njegovoj posljednjoj
znamenki, dok cjelobrojni koli�nik sadr�i sve znamenke osim posljednje. Dakle, ako se
uzastopno dijeli broj sa 10 i pri tome na neku varijablu �ija je po�etna vrijednost nula
doda ostatak tog dijeljenja, te ako se postupak ponavlja sve dok koli�nik ne bude nula,
dobit �e se �eljeni rezultat.


*/

int main() {
	
	int broj,
		suma = 0;

	cout << "Unesite cijeli broj!" << endl;
	cin >> broj;

	if (broj < 0)
	{
		broj = abs(broj);
	}

	do {

		suma += broj % 10;
		broj = broj / 10;
		

	} while (broj>0);
	cout << "Suma znamenki iznosi: " << suma << endl; 

	system("pause>0");
	return false;
}