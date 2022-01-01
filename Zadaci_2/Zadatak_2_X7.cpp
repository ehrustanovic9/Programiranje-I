#include < iostream >

using namespace std;

int reverse(int);

bool s(int, int);

int main() {

	int n, b;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n < 10 || n>1000);

	do {

		cout << "Unesite b: ";
		cin >> b;

	} while (b < 0);

	cout << "Ispis brojeva" << endl;

	for (int i = 0; i <= n; i++) {

		if (i == reverse(i) && s(i, b))
			cout << i << " ";

	}

	system("pause>0");
	return false;
}

int reverse(int x) {

	int cifra_1 = 0;

	while (x > 0) {

		cifra_1 *= 10;
		cifra_1 += x % 10;
		x /= 10;

	}
	return cifra_1;
}

bool s(int x, int y) {

	bool jednaki = false;

	int sDecimala = 0, cifra = 0;

	while (x > 0) {

		cifra = x % 10;
		sDecimala += cifra;
		x /= 10;

	}
	if (sDecimala == y)
		jednaki = true;

	return jednaki;
}


