#include < iostream >

using namespace std;

int f(int, int, int);

int main() {

	int x, d, p;

	do {

		cout << "Unesite x: ";
		cin >> x;

	} while (x < 0);

	do {

		cout << "Unesite d: ";
		cin >> d;

	} while (d < 0 || d>9);

	do {

		cout << "Unesite p: ";
		cin >> p;

	} while (p < 0);

	cout << "Rezultat je: " << f(x, d, p) << endl;

	system("pause>0");
	return false;
}

int f(int x, int d, int p) {

	int brCifri = log10(x) + 1, 
		noviBr = 0;

	if (p < brCifri) {

		for (int i = 0; i < brCifri; i++) {

			int cifra = x % 10;

			if (i == brCifri - p)
				cifra = d;

			noviBr += cifra * pow(10, i);
			x /= 10;
		}

	}
	return noviBr;

}