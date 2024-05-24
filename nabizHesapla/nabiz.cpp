#include <iostream>
#include "nabiz.h"

using namespace std;

nabiz::nabiz() {
	cout << "Defult nabiz constructor cagrildi!" << endl;
	isim = "";
	soyisim = "";
	dogumTarihiGun = 0;
	dogumTarihiAy = 0;
	dogumTarihiYil = 0;
}
nabiz::nabiz(std::string isim, std::string soyisim, int gun, int ay, int yil) {
	setIsim(isim);
	setSoyIsim(soyisim);
	setGun(gun);
	setAy(ay);
	setYil(yil);

}
void nabiz::setIsim(std::string isim) {
	this->isim = isim;
}
void nabiz::setSoyIsim(std::string soyisim) {
	this->soyisim = soyisim;
}
void nabiz::setGun(int gun) {
	if (gun > 0 && gun <= 31) this->dogumTarihiGun = gun;
	else cerr << "Lütfen gecerli bir gün degeri giriniz!" << endl;
}
void nabiz::setAy(int ay) {
	if (ay > 0 && ay <= 12) this->dogumTarihiAy = ay;
	else cerr << "Lutfen gecerli bir ay degeri giriniz!" << endl;
}
void nabiz::setYil(int yil) {
	if (yil > 0) this->dogumTarihiYil = yil;
	else cerr << "Lutfen gecerli bir yil degeri giriniz!" << endl;
}
std::string nabiz::getIsim() {
	return isim;
}
std::string nabiz::getSoyIsim() {
	return soyisim;
}
int nabiz::getGun() {
	return dogumTarihiGun;
}
int nabiz::getAy() {
	return dogumTarihiAy;
}
int nabiz::getYil() {
	return dogumTarihiYil;
}
int nabiz::getYas() {
	return 2024 - getYil(); // burada bana kullanýcýnýn yaþ deðerini döndürecek
}
void nabiz::getHedefNabiz() {
	int alt_sinir = getMaksimumNabiz() * 0.5;
	int ust_sinir = getMaksimumNabiz() * 0.8;

	cout << "Hedef Nabiz alt deger: " << alt_sinir << "\n" << "Hedef Nabiz ust deger: " << ust_sinir << endl;
}
int nabiz::getMaksimumNabiz() {
	return 220 - getYas();
}
void nabiz::printInsan() {
	cout << "Isim: " << getIsim() << "\n" << "Soyisim: " << getSoyIsim() << "\n"
		<< "Dogum Tarihi: " << dogumTarihiGun << "/" << dogumTarihiAy << "/" << dogumTarihiYil << "\n"
		<< "Yas: " << getYas() << "\n" << "Hedef Nabiz: " << "Maksimum Nabiz: " << getMaksimumNabiz() << endl;

	getHedefNabiz();
}