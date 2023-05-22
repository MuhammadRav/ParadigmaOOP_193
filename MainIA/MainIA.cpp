#include <iostream>
#include <vector>
using namespace std;
#include "anak.h"
#include "ibu.h"

int main() {
	ibu* varIbu = new ibu("Ratih");
	ibu* varIbu2 = new ibu("Shella");
	anak* varAnak1 = new anak("Rasya");
	anak* varAnak2 = new anak("Rezza");
	anak* varAnak3 = new anak("Nandu");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varIbu2->tambahAnak(varAnak3);
	varIbu2->tambahAnak(varAnak1);


}