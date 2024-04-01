//struktur 1

#include <iostream>
using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;
	cout << "nomor Mahasiswa :";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa ";
	cin >> mhs.nama;
	cout << "Alamat Mahasiswa : ";
	cin >> mhs.alamat;


}
