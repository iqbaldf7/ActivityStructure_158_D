#include <iostream> 

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20220140188";
	mhs1.nama = "Joko";
	mhs1.alamat = "subang";
	mhs1.umur = 20;

	cout << "Masukan nim: ";
	cin >> mhs2.nim;
	cout <<"Masukan nama: ";
	cin >> mhs2.nama;
	cout << "Masukan alamat: ";
	cin >> mhs2.alamat;
	cout << "Masukan umur: ";
	cin >> mhs2.umur;
	
	cout << "\nNim : " << mhs1.nim;
	cout << "\nnama ; " << mhs1.nama;
	cout << "\nalamat : " << mhs1.alamat;
	cout << "\numur : " << mhs1.umur;

	cout << "\nNim : " << mhs2.nim;
	cout << "\nnama ; " << mhs2.nama;
	cout << "\nalamat : " << mhs2.alamat;
	cout << "\numur : " << mhs2.umur;


	





