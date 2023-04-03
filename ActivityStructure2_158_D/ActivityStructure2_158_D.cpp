#include <iostream>


using namespace std;

struct AlamatDatai
{
	string nim;
	string nama;

};

struct Mahasiswa {
	string nim;
	string nama;
	Alamatdetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs;

	cout << "Maasukan nim: ";
	cin >> mhs.nim;
	cout << "masukan nama: ";
	cin >> mhs.nama;
	cout << "Alamat : " << endl;
	couit << "\tNama desa : ";
	cin >> mhs.alamat.desa;
	cout << "Masukkan umur : ";
	cin >> mhs.umur;

	cout << "\nNim : " << mhs.nim;
	cout << "\nnama : " << mhs.nama;
	cout << "\ndesa : " << mhs.alamat.desa;
	cout << "\nkota : " << mhs.alamat.kota;


