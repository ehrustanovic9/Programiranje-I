#include < iostream >
#include < iomanip >

using namespace std;

/*
 
Zadatak:

Banka na po�etku svake godine ulaga�ima obra�unava kamatu sa P procenata na
nov�anu sumu koja je odle�ala u toku prethodne godine. Napi�ite program, po�tuju�i sve
faze procesa programiranja, kojim se uz kori�tenje funkcije kamata izra�unava nov�ani
iznos kojim �e ulaga� raspolagati poslije G godina ako je po�etno ulaganje S.
Pretpostavlja se da ulaga� ne�e podizati novac u me�uvremenu.

Upute: 

bit �e potrebno unijeti visinu pologa, kamatnu stopu i broj godina; potrebno je
voditi ra�una o tipovima podataka za sve ove vrijednosti, te na�inu na koji se obra�unava
kamata; funkcija kamata �e izra�unavati samo iznos za jednu godinu �tednje; budu�i da
se polog zapravo mijenja svake godine (polog+kamata za prethodnu godinu) funkciju �e
biti potrebno pozivati onoliko puta na koliko je godina �tednja oro�ena; prema tekstu
zadatka je to mogu�e jer se kamata obra�unava isklju�ivo na godi�njoj razini, pa je broj
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

