#include < iostream >
#include < iomanip >
using namespace std;
int unos() {
	int br;
	do {
		cout << "Unesite n: ";
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
bool sorted(int br) {
	while (br > 0) {
		if (br % 10 < br / 10 % 10)
			return false;
		br /= 10;
	}
	return true;
}
int main() {
	int n = unos();
	for (int i = 0; i <= n; i++)
		if (prost(i) && sorted(i))
			cout << i << " ";
	system("pause>0");
	return false;
}