#include <iostream>
using namespace std;

class Hesaplayici{
public:
	double a;
	double b;

	
	Hesaplayici(double ilk_a, double ilk_b) {
		this->a = ilk_a;
		this->b = ilk_b;
		cout << "Hesaplayıcı: A=" << a << ", B=" << b << " olarak seçildi." << endl;
	}

	double topla() {
		return this->a + this->b;
	}

	double cikar() {
		return this->a - this->b;
	}

	double carp() {
		return this->a * this->b;
	}

	double bol() {
		if (this->b == 0) {
			cout << "Hata: Bir sayı sıfıra bölünemez (Tanımsız İşlem).\n";
			return 0.0;
		}
		else {
			return this->a / this->b;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "Turkish");
	cout << "Yapmak istediginiz islemi seciniz: +, -, *, / : ";
	char islem;
	cin >> islem;

	double sayi1, sayi2;
	cout << "Lutfen iki sayi giriniz : ";
	cin >> sayi1 >> sayi2;

	Hesaplayici hesap(sayi1, sayi2);

	double sonuc = 0.0; 

	switch (islem) {
	case '+':
		sonuc = hesap.topla(); 
		cout << "Sonuc: " << sonuc << endl;
		break;
	case '-':
		sonuc = hesap.cikar(); 
		cout << "Sonuc: " << sonuc << endl;
		break;
	case '*':
		sonuc = hesap.carp(); 
		cout << "Sonuc: " << sonuc << endl;
		break;
	case '/':
		sonuc = hesap.bol();
		if (sayi2 != 0) {
			cout << "Sonuc: " << sonuc << endl;
		}
		break;
	default:
		cout << "Gecersiz islem secimi." << endl;
		break;
	}

	
	return 0;
}
