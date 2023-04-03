#include <iostream>

using namespace std;

struct AlamatDetail
{
	string desa[20];
	string kota[20];
};

struct Mahasiswa {
	string nim[12];
	string nama[20];
	AlamatDetail alamat;
	int umur;
};
int main() {

	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Masukkan nim: ";
	}
