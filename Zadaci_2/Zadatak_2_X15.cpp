#include < iostream >

using namespace std;

bool isSorted(int);

int main() {

	int x;

	do {

		cout << "Unesite x: ";
		cin >> x;

	} while (x <= 0);

	cout << "Cifre unesenih brojeva " << (isSorted(x) ? "su" : "nisu") << " sortirane" << endl;

	system("pause>0");
	return false;
}

bool isSorted(int x) {

	int trenutnaCifra = 9;
	while (x > 0) {

		if (trenutnaCifra >= x % 10)
			trenutnaCifra = x % 10;
		else
			return false;

		x /= 10;
	}
	return true;
}