#include < iostream >
#include < iomanip >

using namespace std;

/*
 
Zadatak:

Napišite program koji æe ispisati pozdravnu poruku onoliko puta koliko korisnik želi. Obavezno
koristite funkcije.


*/

void pozdravnaPoruka(int br_ponavljanja);

int main() {

	int broj;

	cout << "Unesite broj koliko zelite puta ponoviti pozdravnu poruku!" << endl;
	cin >> broj;

	if (broj > 0) 
		pozdravnaPoruka(broj);
	else
		cout << "Broj mora biti veci od 0!" << endl;

	system("pause>0");
	return false;
}

void pozdravnaPoruka(int br_ponavljanja) {

	for (int i = 1; i <= br_ponavljanja; i++)
		cout << i << ". Hello world" << endl;

}



