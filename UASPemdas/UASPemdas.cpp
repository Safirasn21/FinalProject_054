#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return 0; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	void setY(int a) {
		this->y = a;
	}
	int getY() {
		return y;
	}


};

class Lingkaran :public bidangDatar {
public:
	int jejari;

	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukan jejari: ";
		cin >> jejari;
		setX(jejari);
	}

	float Luas(int jejari) {
		return 3.14 * jejari * jejari;
	}

	float Keliling(int jejari) {
		return 2 * 3.14 * jejari;
	}

	void cekUkuran() {
		if (cekUkuran > 40)
		{
			cout << "Ukuran Lingkaran adalah Besar";
		}
		return 0;
	}
};

class Persegipanjang :public bidangDatar {
public:
	int Panjang;
	int Lebar; 

	void input() {
		cout << "Persegi Panjang dibuat" << endl;
		cout << "Masukkan Panjang: ";
		cin >> Panjang;
		setX(Panjang);
		cout << "Masukkan Lebar: ";
		cin >> Lebar;
		setY(Lebar);
	}

	float Luas(int Panjang, int Lebar){
		return Panjang * Lebar;
	}

	float Keliling(int Panjang, int Lebar) {
		return 2 * Panjang + 2 * Lebar;
	}

	
};

int main() {
	bidangDatar* shape;
	Lingkaran lingkaran;
	Persegipanjang persegipanjang;
	char ch;

	cout << "Setelah jejari diinput" << endl;

	shape = &lingkaran;
	shape->input();
	int jejari = shape->getX();
	cout << "Luas Lingkaran = " << lingkaran.Luas(jejari) << endl;
	cout << "Keliling Lingkaran = " << lingkaran.Keliling(jejari) << endl;

	cout << "Setelah sisi diinput" << endl;

	shape = &persegipanjang;
	shape->input();
	int Panjang = shape->getX();
	int Lebar = shape->getY();
	cout << "Luas Persegi Panjang = " << persegipanjang.Luas(Panjang, Lebar) << endl;
	cout << "Keliling Persegi Panjang = " << persegipanjang.Keliling(Panjang, Lebar) << endl;


	cout << "Apakah anda ingin mengulang program? (Y/N) = ";
	cin >> ch;

	return 0;
}