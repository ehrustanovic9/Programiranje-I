#include < iostream >
#include < iomanip >

using namespace std;

/*

Napi�ite program koji �e omogu�iti ispis sljede�eg lika. Upotrijebite for petlje. Omogu�ite
korisniku da sam izabere �eljeni znak i visinu/�irinu lika.

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