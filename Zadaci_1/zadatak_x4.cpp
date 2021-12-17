#include < iostream >
#include < iomanip >

using namespace std;


int main() {

	int n;
	double suma = 0;

	do {

		cout << "Unesite broj veci od 0: ";
		cin >> n;

	} while (n <= 0);

	for (int i = n; i <= 2*n; i++) {

		suma += pow(2, abs(i - 2));

	}
	cout << "Suma iznosi: " << suma << endl;

	system("pause>0");
	return false;
}