#include < iostream >
#include < iomanip >
using namespace std;
int unos() {
	int br;
	cout << "Unesite n: ";
	cin >> br;
	return br;
}
int main() {
	int n = unos();
	double suma = 0.0f;
	for (int i = 0; i <= n; i++)
		suma += 1 / pow(2 * i + 1, 2);
	cout << "Suma iznosi: " << setprecision(3) << suma << endl;
	system("pause>0");
	return false;
}