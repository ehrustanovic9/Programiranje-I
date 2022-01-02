#include < iostream >

using namespace std;

int main() {

	int n;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n < 10 || n>99);

	for (int i = 10; i <= n; i++) {

		int c1 = i / 10, c2 = i % 10, zbir = c1 + c2, proizvod = c1 * c2;
		if (zbir < proizvod)
			cout << i << " ";
	}

	system("pause>0");
	return false;
}