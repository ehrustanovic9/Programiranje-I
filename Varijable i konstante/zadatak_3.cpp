#include < iostream >

using namespace std;

/*

ZADATAK: 

Satnica u automehani�arskoj radionici iznosi 35 KM (bez PDV). Ukoliko se u
program unese cijena dijelova i broj radnih sati omogu�ite izra�un ukupnih tro�kova
popravke automobila i ispis odgovaraju�eg ra�una. Prilikom izra�una tro�kova ne
zaboravite obra�unati PDV (17%). Ispis uredite da izgleda �to je sli�nije mogu�e pravom
fiskalnom ra�unu (naziv automehani�ara, sjedi�te, sve stavke pojedina�no na ra�unu,
porez, ukupno).

*/

int main() {
	
	const double satnica = 35.0,
		      pdv = 0.17;

	double dijelovi, br_sati, troskovi_rada, ukupno;

	cout << "Unesite cijenu dijelova" << endl;
	cin >> dijelovi;
	cout << "Unesite broj radnih sati" << endl;
	cin >> br_sati;

	cout << "==============================================\n" << endl;
	cout << "\tAutomehanicarska radionica" << endl;
	cout << "\tTravnik" << endl;
	cout << "\tBosanska ulica b.b\n" << endl;
	cout << "==============================================\n" << endl;

	troskovi_rada = br_sati * satnica;

	cout << "Dijelovi ...............................: " << dijelovi << "KM" << endl;
	cout << "Troskovi rada ..........................: " << troskovi_rada << "KM\n" << endl;

	cout << "==============================================\n" << endl;

	ukupno = troskovi_rada + dijelovi;

	cout << "Ukupno bez pdv-a .......................: " << ukupno << "KM" << endl;
	cout << "Pdv ....................................: " << ukupno * pdv << "KM\n" << endl;

	cout << "==============================================\n" << endl;

	cout << "UKUPNO .......................: " << ukupno+ukupno*pdv << "KM\n" << endl;

	cout << "==============================================" << endl;

	system("pause>0");
	return false;
}