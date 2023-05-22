#include <iostream>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n" << endl;
	}
	~orang() {
		cout << "Orang dihapus\n" << endl;
	}

	int jumlah(int a, int b) {
		return a + b;
	}
};

class pelajar : public orang {
public:
	string sekolah;

	pelajar(string pNama, string pSekolah) :
		orang(pNama),
		sekolah(pSekolah) {
		cout << "Pelajar dihapus\n" << endl;
	}
	string perkenalan() {
		return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n\n";
	}
};

int main() {
	pelajar siswa1("Muhammad Rezza", "SMAN 1 BEKASI");
	cout << siswa1.perkenalan();
	cout << "Hasil = " << siswa1.jumlah(10, 90) << endl;

	return 0;
}