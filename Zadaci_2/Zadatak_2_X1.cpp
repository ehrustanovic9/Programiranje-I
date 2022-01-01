#include < iostream >

using namespace std;

bool f(int);
bool g(int, int);

int main() {

	int n, d, c = 0;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n < 100 || n>1000);

	do {

		cout << "Unesite d: ";
		cin >> d;

	} while (d < 0 || d>9);

	for (int i = 2; i <= n; i++) {
		
		c += f(i) * g(i, d);

	}
	cout << "Rezultat: C je jednako: " << c << endl;
	
	system("pause>0");
	return false;
}

bool f(int x) {

	bool prost = true;

	if (x == 0 || x == 1)
		prost = false;
	else {

		for (int i = 2; i <= x/2; i++) {
			
			if (x % i == 0) {

				prost = false;
				break;

			}

		}

	}
	return prost;
}

bool g(int x, int d) {

	bool sadrzi = false;

	while (x > 0) {

		int cifra = 0;

		cifra = x % 10;
		if (cifra == d) {

			sadrzi = true;
			break;

		}
		x /= 10;

	}
	return sadrzi;
}
