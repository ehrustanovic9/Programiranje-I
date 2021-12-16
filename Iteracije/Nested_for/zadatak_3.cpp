#include < iostream >
#include < iomanip >

using namespace std;

/*

Zadatak

Napi�ite program koji upotrebom for petlji ispisuje geometrijski lik kvadrat/pravokutnik
uz pomo� nekog znaka. Omogu�ite korisniku da sam izabere �eljeni znak, �irinu i visinu
(Ako se odlu�ite za kvadrat - �irina �e biti jednaka visini.).

Upute:

Potrebne su dvije for petlje. Vanjska for petlja kontrolira broj redaka (visinu), a
unutarnja broj znakova u retku (�irinu). Dakle, i naredbe unutar vanjske for petlje, kao i
naredbe u unutarnjoj for petlji �e se ponoviti onoliko puta koliko iznosi vrijednost visine.


*/

int main() {

	int visina,
		sirina,
		geo;

	char znak;

	cout << "1. Kvadrat" << endl;
	cout << "2. Pravougaonik" << endl;
	cout << "Unesite broj geometrijskog lika kojeg zelite kreirati: ";
	cin >> geo;

	switch (geo) {

		case 1: {

			cout << "Unesite visinu kvadrata: ";
			cin >> visina;
			cout << "Unesite sirinu kvadrata: ";
			cin >> sirina;
			cout << "Unesite zeljeni znak: ";
			cin >> znak;

			if (sirina == visina) {

				for (int i = 1; i <= visina; i++) {

					for (int j = 1; j <= sirina; j++) {

						cout << znak;
					}
					cout << endl;
				}
			}
			else
				cout << "Kvadrat mora imati iste stranice!" << endl;
		}
		break;

		case 2: {

			cout << "Unesite visinu pravougaonika: ";
			cin >> visina;
			cout << "Unesite sirinu pravougaonika: ";
			cin >> sirina;
			cout << "Unesite zeljeni znak: ";
			cin >> znak;

			if (sirina != visina) {

				for (int i = 1; i <= visina; i++) {

					for (int j = 1; j <= sirina; j++) {

						cout << znak;
					}
					cout << endl;
				}
			}
			else
				cout << "Pravougaonik mora imati razlicite stranice!" << endl;
		}
		break;

	default:cout << "Pogresan izbor geometrijskog tijela!" << endl;
		break;
	}

	system("pause>0");
	return false;
}