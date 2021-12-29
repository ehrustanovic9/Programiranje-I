#include < iostream >
#include < iomanip >

using namespace std;

int g(int x, int y); 
int f(int x); 

int main() {

	int m1, m2, z;

	do {

		cout << "Unesite cijelobrojnu vrijednost m1: ";
		cin >> m1;

	} while (m1 > 1000);

	do {

		cout << "Unesite cijelobrojnu vrijednost m2: ";
		cin >> m2;
		cout << "Unesite cijelobrojnu vrijednost z: ";
		cin >> z;

	} while (m2 < m1 || m2>9999 && z > 0);

	int c = 0;

	for (int i = m1; i <= m2; i++) {

		c += g(f(i), 2);

	}

	cout << "Vrijednost varijable C iznosi: " << c << endl;

	system("pause>0");
	return false;
}

int f(int x) { 

	int cifra,
		suma = 0;

	while (x != 0) {

		cifra = x % 10;
		suma += cifra;
		x /= 10;

	}
	return suma;
}

int g(int x, int y) {

	if (x == y)
		return true;
	else
		return false;

}