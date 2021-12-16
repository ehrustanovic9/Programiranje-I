#include < iostream >
#include < iomanip >

using namespace std;

/*

Zadatak

Napi�ite program koji za uneseno n, izra�unava i ispisuje sumu S=1!+2!+3!...+n!
Po�tujte sve faze procesa programiranja.

Upute: 

U zadatku se tra�i suma faktorijela do broja n (uklju�uju�i i n). Pojam faktorijela
vam je matemati�ki pojam � predstavlja umno�ak prirodnih brojeva. Faktorijel od npr. 3
iznosi 1*2*3=6. Dakle, potrebno je izra�unati vrijednosti faktorijela za svaki prirodni
broj do n, ali i zbrojiti sve dobivene vrijednosti.

*/

int main() {
	
	int n, 
		s = 0, 
		f = 1;

	cout << "Unesite prirodni broj n: ";
	cin >> n;

	if (n > 0) {

		for (int i = 1; i <= n; i++) {

			f = f * i;
			s += f;
			cout << i << "!";
			if (i < n)
				cout << "+";

		}
		cout << " = " << s << endl;

	}
	else
		cout << "Broj mora biti veci od 0!" << endl;

	system("pause>0");
	return false;
}