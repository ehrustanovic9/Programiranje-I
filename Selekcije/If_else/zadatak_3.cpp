#include < iostream >

using namespace std;

/*

ZADATAK: 

Napi�ite program za izra�unavanje indeksa tjelesne mase (BMI) te ispi�ite
odgovaraju�e poruke. Indeks tjelesne mase se ra�una po formuli:

BodyMassIndex=masa/visina2

Masa se izra�ava u kilogramima, a visina u metrima. Ukoliko
vam je indeks tjelesne mase u rasponu od 20 do 25 va�a tjelesna masa je u skladu s
va�om visinom, ukoliko je va� BMI manji od 20 pothranjeni ste, a ukoliko je ve�i od 25
naginjete gojaznosti.

*/

int main() {
	
	double masa,
		  visina, 
		  bmi;

	const int pothranjenost = 20, 
		      gojaznost = 25;

	cout << "Unesite vasu kilazu u kilogramima" << endl;
	cin >> masa;
	cout << "Unesite vasu visinu u metrima" << endl;
	cin >> visina;

	bmi = masa / pow(visina, 2);

	if (bmi < pothranjenost) {

		cout << "Pohtranjeni ste! Vas BMI iznosi: " << bmi << endl;

	}
	else if (bmi > gojaznost) {

		cout << "Gojazni ste! Vas BMI iznosi: " << bmi << endl;

	}
	else {

		cout << "Vasa masa je u skladu sa Vasom visinom! Vas BMI iznosi: " << bmi << endl;
	}


	system("pause>0");
	return false;
}