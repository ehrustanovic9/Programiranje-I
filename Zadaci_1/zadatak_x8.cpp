#include < iostream >
#include < iomanip >

using namespace std;


int main() {

	int n;

	double p = 1;

	do {

		cout << "Unesite n: ";
		cin >> n;

	} while (n < 1 || n > 10);

	for (int i = 1; i <= n; i++) {

		p *= pow(i + 1, -1);

	}
	cout << "Produkt je: " << p << endl;


	system("pause>0");
	return false;
}