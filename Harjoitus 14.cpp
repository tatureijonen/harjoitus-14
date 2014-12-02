/*
TATU REIJONEN - IIO14S1

Harjoitus 14 (Palautus vko 45)

Tee ohjelma, joka kysyy henkilötietosi seuraavasti:
Anna (kaikki) etunimesi (merkkijono):
Anna kengannumero (kokonaisluku):
Anna sukunimi (merkkijono):
Anna koulumatka (reaaliluku):
Anna osoitteesi:
Anna postinumero:

Ohjelma tulostaa tiedot seuraavasti:
sukunimi etunimet
osoite
postinumero
kengannumero ja koulumatka

Käytä C++:n cin- ja cout-olioita ohjelman toteuttamiseen.
*/

#include <iostream>
using namespace std;
void main()

{
	char etunimet[40];
	char suku[40];
	int koulu;
	float kenka;
	char osoite[40];
	int posti;


	cout << "Anna kaikki etunimesi: ";
	cin.get(etunimet, 40);

	cout << "Anna kengannumero: ";
	cin >> kenka;

	cout << "Anna sukunimesi: ";
	cin >> suku;

	cout << "Anna koulumatka: ";
	cin >> koulu;
	cin.get();
	
	cout << "Anna osoitteesi: ";
	
	cin.get(osoite, 40);

	cout << "Anna postinumero: ";
	cin >> posti;
	cout << endl;
	
	cout << suku << " " << etunimet << "\n";
	cout << osoite << "\n";
	cout << posti << "\n";
	cout << kenka << " ja " << koulu << endl;
	

}


/*
#include <iostream>
using namespace std;
void main()

{
	char etunimet[30];
	char sukunimet[30];

	
	cin.get(etunimet, 30);
	cin.get();
	cin.get(sukunimet, 30);
	cout << etunimet;
	cout << sukunimet;


}
*/