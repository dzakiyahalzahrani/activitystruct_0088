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
	cout << "Umur Mahasiswa: ";
	cin >> mhs.umur;

	cout << endl;

	cout << "\n NIM: " << mhs.nim;
	cout << "\n Nama: " << mhs.nama;
	cout << "\n Alamat: " << mhs.alamat;
	cout << "\n Umur: " << mhs.umur;

}

// struktur 2
#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;
	cout << "nomor Mahasiswa :";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa ";
	cin >> mhs.nama;
	cout << "Alamat Mahasiswa : " << endl;
	cout << "\t Nama Desa :";
	cin >> mhs.alamat.desa;
	cout << "\t Nama Kota";
	cin >> mhs.alamat.kota;
	cout << "Umur Mahasiswa: ";
	cin >> mhs.umur;

	cout << endl;

	cout << "\n NIM : " << mhs.nim;
	cout << "\n Nama : " << mhs.nama;
	cout << "\n Alamat : ";
	cout << "\n \t  Desa :"; >> mhs.alamat.desa;
	cout << "\n \t  Kota :"; >> mhs.alamat.kota;
	cout << "\n Umur : " << mhs.umur;

}

//struktur 3
#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;

	cout << "Nomor Mahasiswa : ";
	getline(cin, mhs.nim);
	cout << "Nama Mahasiswa : ";
	getline(cin, mhs.nama);

	cout << "Alamat Mahasiswa : " << endl;
	cout << "\t Nama Desa: ";
	cin >> mhs.alamat.desa;
	cout << "\t Nama Kota";
	cin >> mhs.alamat.kota;
	cout << "Umur Mahasiswa : ";
	cin >> mhs.umur;

