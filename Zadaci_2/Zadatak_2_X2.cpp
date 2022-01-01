#include < iostream >

using namespace std;

bool f(int, int, int);

int main() {

	int n, d_1, d_2, c = 0;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n < 100 || n>1000);

	do {

		cout << "Unesite d_1: ";
		cin >> d_1;

	} while (d_1 < 0 || d_1>9);

	do {

		cout << "Unesite d_2: ";
		cin >> d_2;

	} while (d_2 < 0 || d_2>9);

	for (int i = 0; i <= n; i++) {
		
		c += f(i, d_1, d_2);

	}
	cout << "Rezultat: C je jednako: " << c << endl;
	
	system("pause>0");
	return false;
}

bool f(int x, int d1, int d2) {

	bool bD1 = false, bD2 = false;

	while (x > 0) {

		int cifra = 0;

		cifra = x % 10;

		if (cifra == d1)
			bD1 = true;
		if (cifra == d2)
			bD2 = true;

		x /= 10;
	}
	return bD1 && bD2;
}