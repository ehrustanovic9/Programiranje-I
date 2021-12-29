#include < iostream >

using namespace std;

bool isPrime(int x);
bool isSorted(int x);

int main() {

	int n;

	do {

		cout << "Unesite n: " << endl;
		cin >> n;

	} while (2 > n || n > 1000);

	cout << "Ispis brojeva" << endl;

	for (int i = 2; i < n; i++) {

		if (isPrime(i) && isSorted(i)) {

			cout << i << " ";

		}

	}

	system("pause>0");
	return false;
}

bool isPrime(int x) {

	bool prost = true;

	if (x == 0 || x == 1) {
		prost = false;
	}
	else {
		for (int i = 2; i <= x / 2; ++i) {
			if (x % i == 0) {
				prost = false;
				break;
			}
		}
	}
	return prost;
}

bool isSorted(int x) {

	int ostatak = 0;

	while (x > 0) {

		ostatak = x % 10;
		if (ostatak < x / 10 % 10)
			return false;
		else
			x /= 10;
	}
	return true;
}