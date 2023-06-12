#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar { /*lengkapi disini*/ 
public:
	void input() {
		int r;
		cout << "Lingkaran dibuat";
		cout << "\nMasukkan jejari : ";
		cin >> r;
		setX(r);
	}

	float Luas() {
		int r = getX();
		return 3.14 * r * r;
	}

	float Keliling() {
		int r = getX();
		return 2 * 3.14 * r;
	}
};

class Bujursangkar :public bidangDatar { /*lengkapi disini*/ 
public:
	void input() {
		int s;
		cout << "Bujursangkar dibuat";
		cout << "\nMasukkan sisi : ";
		cin >> s;
		setX(s);
	}

	float Luas() {
		int s = getX();
		return s * s;
	}

	float Keliling() {
		int	s = getX();
		return 4 * s;
	}
};

int main() { /*lengkapi disini*/ 
	cout << "Output Program" << endl;

	Lingkaran lingkaran;
	lingkaran.input();
	cout << "Luas Lingkaran = " << lingkaran.Luas(); 
	cout << "\nKeliling Lingkaran = " << lingkaran.Keliling() << endl;

	Bujursangkar bujursangkar;
	bujursangkar.input();
	cout << "Luas Bujursangkar = " << bujursangkar.Luas();
	cout << "\nKeliling Bujursangkar = " << bujursangkar.Keliling() << endl;

	return 0;
}