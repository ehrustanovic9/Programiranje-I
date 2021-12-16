#include < iostream >
#include < iomanip >

using namespace std;

/*

Napišite program koji æe omoguæiti ispis sljedeæeg lika. Upotrijebite for petlje. Omoguæite
korisniku da sam izabere željeni znak i visinu/širinu lika.

*
**
***
****
*****
******
*******

*/

int main() {

	int visina;

	char znak;

	cout << "Unesite visinu lika: ";
	cin >> visina;
	cout << "Unesite znak geometrijskog oblika: ";
	cin >> znak;

	for (int i = 1; i <= visina; i++) {

		for (int j = 1; j <= visina; j++) {

			cout << znak;

		}
		cout << endl;

	}


	system("pause>0");
	return false;
}