#include <iostream>
#include "Samochod.h"
#include <cstring>
using namespace std;
Samochod::Samochod(const char* imie, const char* nazwisko, int cena) {
	liczba_drzwi = 4;
	strcpy_s(this->imie, imie);
	strcpy_s(this->nazwisko, nazwisko);
	this->cena = cena;
}
Samochod::Samochod(int cena) {
	this->cena = cena;
	liczba_drzwi = 5;
	strcpy_s(this->imie, " ");
	strcpy_s(this->nazwisko, "");
}
Samochod::~Samochod() {
	cout << "Destruktor";
}

int Samochod::get_cena()
{
	return cena;
}

int Samochod::get_liczba_drzwi()
{
	return liczba_drzwi;
}

void Samochod::set_cena(int cena)
{
	this->cena = cena;
}

void Samochod::set_liczba_drzwi(int iczba_drzwi)
{
	this->liczba_drzwi = liczba_drzwi;
}

void Samochod::zmiana(const char* imie,const char* nazwisko)
{
	strcpy_s(this->imie, imie);
	strcpy_s(this->nazwisko, nazwisko);
}

void Samochod::WRS(float procent,int cena)
{
	float wynik = (procent / 100) * cena;
	cout << "Podatek od czynnosci cywilnoprawnych wynosi: " << wynik << endl;
}
void Samochod::piszdane() {
	cout << "liczba drzwi:" << liczba_drzwi << endl;
	cout << "cena:" << cena << endl;
	cout << "imie:" << imie << endl;
	cout << "nazwisko:" << nazwisko << endl;
}




int main()
{
	Samochod Audi("Andrzej", "Kowalski", 20000);
	Samochod BMW(40000);
	Samochod Nissan("Mariusz", "Pudzianowski", 50000);
	cout <<Audi.get_cena()<< endl;
	cout <<BMW.get_liczba_drzwi()<< endl;
	Nissan.set_cena(45000);
	Audi.set_liczba_drzwi(5);
	Audi.zmiana("Jerzy", "Dregalski");
	Audi.WRS(5, 20000);
	BMW.WRS(2, 40000);
	Nissan.WRS(8, 50000);
	Audi.~Samochod();

}

