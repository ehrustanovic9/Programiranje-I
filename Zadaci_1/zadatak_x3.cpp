#include < iostream >
#include < iomanip >

using namespace std;


int main() {

	int n;

	float suma = 0.0f;

	do {

		cout << "Unesite pozitivan cijeli broj: ";
		cin >> n;

	} while (n < -5 || n == 0);

	for (int i = -5; i <= n; i++) {

		suma += abs(float(i) / n);

	}
	cout << "Suma iznosi: " << suma << endl;

	system("pause>0");
	return false;
}