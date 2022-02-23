#include < iostream >
#include < iomanip >
using namespace std;
int unos() {
	int br;
	do {
		cout << "Unesite dimenziju dinamickog niza: ";
		cin >> br;
	} while (10 > br || br > 1000);
	return br;
}
bool prost(int br) {
	if (br <= 2)
		return false;
	for (int i = 2; i <= br / 2; i++)
		if (br % i == 0) {
			return false;
			break;
		}
	return true;
}
double postotak(int* niz, int vel) {
	int brojac = 0;
	for (int i = 0; i < vel; i++)
		if (prost(i))
			brojac++;
	return 100.0 * brojac / vel;
}
void popuni_niz(int* niz, int vel) {
	for (int i = 0; i < vel; i++)
		*(niz + i) = rand() % 1000 + 1; //aritmetika pokazivaca
}
int main() {
	int n = unos();
	int* niz = new int[n];
	popuni_niz(niz, n);
	srand(NULL);
	cout << "Postotak slucajnih vrijednosti prosti brojeva od 0 do " << n << " iznosi: " << setprecision(3) << postotak(niz, n) << "%." << endl;
	delete[]niz;
	niz = nullptr;
	system("pause>0");
	return false;
}