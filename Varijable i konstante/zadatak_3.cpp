#include < iostream >

using namespace std;

/*

ZADATAK: 

Satnica u automehanièarskoj radionici iznosi 35 KM (bez PDV). Ukoliko se u
program unese cijena dijelova i broj radnih sati omoguæite izraèun ukupnih troškova
popravke automobila i ispis odgovarajuæeg raèuna. Prilikom izraèuna troškova ne
zaboravite obraèunati PDV (17%). Ispis uredite da izgleda što je sliènije moguæe pravom
fiskalnom raèunu (naziv automehanièara, sjedište, sve stavke pojedinaèno na raèunu,
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