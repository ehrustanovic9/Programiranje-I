#include < iostream >

using namespace std;

int reverse(int); //okrece desetice

bool isPrime(int);

int main() {

	int n;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n < 10 || n>1000);

	for (int i = 2; i <= n; i++) {

		if (isPrime(i) && isPrime(reverse(i)))
			cout << i << " ";

	}

	system("pause>0");
	return false;
}

int reverse(int x) {

	int cifra_1 = 0, cifra_2 = 0, rev = 0, brojac = 1;

	if (x < 100) {

		while (x > 0) {

			cifra_1 = x % 10;
			rev += cifra_1 * pow(10, brojac);
			cifra_2 = cifra_1;
			--brojac;
			x /= 10;

		}
	}
	return rev;
}

bool isPrime(int x) {

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