#include < iostream >
#include < iomanip >
using namespace std;
int unos() {
	int br;
	cout << "Unesite n: ";
	cin >> br;
	return br;
}
int potencija(int n, int k = 2, int l = 2) {
	if (k * l == n)
		return n;
	else if (n > k * l)
		return potencija(n, k + 1, l + 1);
}
int main() {
	int n = unos();
	cout << "Potencija iznosi: " << potencija(n) << endl;
	system("pause>0");
	return false;
}