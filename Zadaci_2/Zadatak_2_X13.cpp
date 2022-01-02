#include < iostream >

using namespace std;

bool checkNumber(int);

int main() {

	int n;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n <= 0);

	for (int i = 1; i <= n; i++) {

		if (checkNumber(i))
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