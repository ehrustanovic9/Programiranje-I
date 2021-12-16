#include < iostream >
#include < iomanip >

using namespace std;

/*

Zadatak:

Napi�ite program, po�tuju�i sve faze procesa programiranja, koji korisniku omogu�ava
unos jednog prirodnog broja. Nakon toga program treba omogu�i drugom korisniku da
pogodi o kojem je broju rije�. Program treba da se izvr�ava sve do momenta dok drugi
korisnik ne pogodi o kojem broju je rije�.


*/

int main() {
	
	int broj,
		unos;

	bool pogodjen = false;

	cout << "Igrac_1: Unesite Vas omiljeni broj" << endl;
	cin >> broj;

	system("cls");

	do {

		cout << "Igrac_2: Pogodite omiljeni broj Vaseg kolege" << endl;
		cin >> unos;
		if (unos == broj) {

			pogodjen = true;
		}
		else
			cout << "Igrac_2: Niste pogodili broj Vaseg kolege" << endl;

	} while (pogodjen != true);

	cout << "Igrac_2: Uspjesno ste pogodili broj Vaseg kolege koji je bio " << broj << endl;

	system("pause>0");
	return false;
}