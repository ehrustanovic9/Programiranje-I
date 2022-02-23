#include <iostream>
using namespace std;

int unos() {
	int br;
	do {
		cout << "Unesite prirodan broj: ";
		cin >> br;
	} while (10 > br || br > 10000);
	return br;
}
bool checkNum(int br) {
	while (br > 0) {
		if ((br % 10) % 2 == 0) {
			return true;
			break;
		}
		br /= 10;
	}
	return false;
}
bool sorted(int br) {
	while (br > 0){
		if (br % 10 < br / 10 % 10)
			return true;
		else
			break;
		br /= 10;
	}
	return false;
}

int main()
{
	int n = unos(), m = unos();
	if (m > n) { int pomocna = m; m = n; n = pomocna; }
	for (int i = m; i <= n; i++)
		if (checkNum(i) == 0 && sorted(i))
			cout << i << " ";
	
	system("pause>0");
	return 0;
}