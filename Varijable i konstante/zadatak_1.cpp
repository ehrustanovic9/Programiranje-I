#include < iostream >

using namespace std;

/*

ZADATAK: 

Dvije uobi�ajene skale za mjerenje temperature su Fahrenheit i Celsius.
Ta�ka klju�anja vode je 212�F ill 100�C. Ta�ka zamrzavanja vode je 32 �F ili 0�C. Ako
pretpostavimo da je odnos izme�u dvije skale mogu�e izraziti sljede�im izrazom F=9/5C+32
napravite program koji �e konvertirati temperaturu izra�enu u stupnjevima
Celsiusa u temperaturu izra�enu u stupnjevima Fahrenheita.
Pri izradi programa po�tujte sve faze procesa programiranja.

*/

int main() {
	
	float celzijus, 
		  fahrenheit;

	cout << "Unesite temperaturu izrazenu u stupnjevima Celsiusa!" << endl;
	cin >> celzijus;

	fahrenheit = 9*celzijus/5+32;
	cout << "Temperatura u Fahrenheitima iznosi: " << fahrenheit << endl;

	system("pause>0");
	return false;
}