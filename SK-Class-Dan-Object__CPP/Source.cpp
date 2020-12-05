#include <iostream>
#include <conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

class PersegiPanjang {
public:
	int aPanjang;
	int aLebar;

	int HitungLuas() {
		return aPanjang * aLebar;
	}
};


int main() {
	/* Objek */
	PersegiPanjang PP;

	cout << "Nilai Panjang  = "; cin >> PP.aPanjang;
	cout << "Nilai Lebar    = "; cin >> PP.aLebar;

	cout << endl << endl;

	cout << "Panjang  : " << PP.aPanjang << endl;
	cout << "Lebar    : " << PP.aLebar << endl;
	cout << "Luas     : " << PP.HitungLuas() << endl;

	_getch();
	return 0;
}