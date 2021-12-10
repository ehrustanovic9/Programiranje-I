#include < iostream >

using namespace std;

/*

ZADATAK: 

Dvije uobièajene skale za mjerenje temperature su Fahrenheit i Celsius.
Taèka kljuèanja vode je 212°F ill 100°C. Taèka zamrzavanja vode je 32 °F ili 0°C. Ako
pretpostavimo da je odnos izmeðu dvije skale moguæe izraziti sljedeæim izrazom F=9/5C+32
napravite program koji æe konvertirati temperaturu izraženu u stupnjevima
Celsiusa u temperaturu izraženu u stupnjevima Fahrenheita.
Pri izradi programa poštujte sve faze procesa programiranja.

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