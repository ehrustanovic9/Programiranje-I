#include < iostream >

using namespace std;

bool s(int, int);

int main() {

	int n, b, c = 0;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n < 100 || n>1000);

	do {

		cout << "Unesite b: ";
		cin >> b;

	} while (b < 0 || b>30);

	for (int i = 0; i <= n; i++) {
		
		c += s(i, b);

	}
	cout << "Rezultat: C je jednako: " << c << endl;
	
	system("pause>0");
	return false;
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