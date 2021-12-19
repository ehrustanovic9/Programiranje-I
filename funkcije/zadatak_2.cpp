#include < iostream >
#include < iomanip >

using namespace std;

/*
 
Zadatak:

Banka na poèetku svake godine ulagaèima obraèunava kamatu sa P procenata na
novèanu sumu koja je odležala u toku prethodne godine. Napišite program, poštujuæi sve
faze procesa programiranja, kojim se uz korištenje funkcije kamata izraèunava novèani
iznos kojim æe ulagaè raspolagati poslije G godina ako je poèetno ulaganje S.
Pretpostavlja se da ulagaè neæe podizati novac u meðuvremenu.

Upute: 

bit æe potrebno unijeti visinu pologa, kamatnu stopu i broj godina; potrebno je
voditi raèuna o tipovima podataka za sve ove vrijednosti, te naèinu na koji se obraèunava
kamata; funkcija kamata æe izraèunavati samo iznos za jednu godinu štednje; buduæi da
se polog zapravo mijenja svake godine (polog+kamata za prethodnu godinu) funkciju æe
biti potrebno pozivati onoliko puta na koliko je godina štednja oroèena; prema tekstu
zadatka je to moguæe jer se kamata obraèunava iskljuèivo na godišnjoj razini, pa je broj
godina, a time i broj ponavljanja cjelobrojan.

*/

double kamata(double p, float k);

int main() {

	double s;
	float p;
	int g;

	do {

		cout << "Unesite polog: ";
		cin >> s;
		cout << "Unesite kamatnu stopu: ";
		cin >> p;
		cout << "Unesite broj godina: ";
		cin >> g;

	} while (s <= 0 || p <= 0 || g <= 0);

	for (int i = 1; i <= g; i++) {

		s += kamata(s, p);

	}
	cout << "Na racunu nakon " << g << " god imate iznos: " << s << "KM" << endl;

	system("pause>0");
	return false;
}

double kamata(double p, float k) {

	return p * (k / 100);
}

