#include < iostream >
#include < iomanip >

using namespace std;

/*

Zadatak

Napi�ite program za ispis tablice mno�enja prvih 10 prirodnih brojeva. Po�tujte sve faze
procesa programiranja.

*/

int main() {
	
	for (int i = 1; i <= 10; i++) {

		for (int j = 1; j <= 10; j++) {

			cout << i << " + " << j << " = " << i * j << endl;

		}
		cout << endl;

	}

	system("pause>0");
	return false;
}