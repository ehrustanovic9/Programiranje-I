#include < iostream >

using namespace std;

int getBrojCifara(int x);
int operacija(int b1, int b2);

bool isValidan(int x);

int main() {

	int nd, b1, b2;

	do {

		cout << "Unesite nd: ";
		cin >> nd;

	} while (nd < 0);

	do {

		cout << "\n[1]: Unesite binaran broj: ";
		cin >> b1;
		cout << "[2]: Unesite binaran broj: ";
		cin >> b2;

	} while (!(getBrojCifara(b1) == nd && getBrojCifara(b2) == nd));

	if (isValidan(b1) == 1 && isValidan(b2) == 1) {

		cout << "Rezultat binarne ekvivalencije je: " << operacija(b1, b2) << endl;

	}
	else
		cout << "Brojeve koje ste ne unjeli ne cine binarni brojevni sistem!" << endl;

	system("pause>0");
	return false;
}

int getBrojCifara(int x) {

	int cifra, brojac = 0;

	do {

		cifra = x % 10;
		brojac++;
		x /= 10;

	} while (x > 0);

	return brojac;
}

bool isValidan(int x) {

	bool binaran = false;

	int cifra;

	for (int i = 1; i <= getBrojCifara(x); i++) {

		cifra = x % 10;
		if (cifra <= 1)
			binaran = true;
		else {

			binaran = false;
			break;

		}
		x = x / 10;
	}
	return binaran;
}

int operacija(int b1, int b2) {

	int ekvivalencija = 0,
		rezultat = 0,
		c_b1 = getBrojCifara(b1);

	for (int i = 0; i < c_b1; i++) {

		int pomocna_b1 = 0,
			pomocna_b2 = 0;

		pomocna_b1 = b1 % 10;
		pomocna_b2 = b2 % 10;

		ekvivalencija = ((!pomocna_b1) || pomocna_b2) && ((!pomocna_b2) || pomocna_b1);
		rezultat += ekvivalencija * pow(10, i);

		b1 = b1 / 10;
		b2 = b2 / 10;
	}
	return rezultat;
}