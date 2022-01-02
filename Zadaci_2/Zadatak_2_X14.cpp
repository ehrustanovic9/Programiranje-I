#include < iostream >

using namespace std;

bool checkNumber(int);
bool isParan(int);
bool isVeci(int, int);

int main() {

	int n, x;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n <= 0);

	do {

		cout << "Unesite x: ";
		cin >> x;

	} while (x <= 0);

	for (int i = 1; i <= n; i++) {

		if (checkNumber(i) && isParan(i) && isVeci(i, x))
			cout << i << " ";

	}

	system("pause>0");
	return false;
}

bool checkNumber(int x) {

	int sadrzi = true;

	int cifra = x % 10;

	while (x > 0) {

		if (x % 10 != cifra)
			sadrzi = false;
		x /= 10;
	}
	return sadrzi;
}

bool isParan(int x) {

	bool paran = true;

	if (x % 2 != 0)
		paran = false;

	return paran;
}

bool isVeci(int x, int y) {

	bool veci = true;

	int suma = 0;

	while (x > 0) {

		int cifra = x % 10;
		suma += cifra;
		x /= 10;

	}
	if (suma <= y)
		veci = false;

	return veci;
}