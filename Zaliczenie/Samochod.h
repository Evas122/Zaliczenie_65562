#pragma once
class Samochod{
private:
	int liczba_drzwi;
	int cena;
	char imie[20];
	char nazwisko[20];
public:
	Samochod(const char* imie, const char* nazwisko, int cena);
	Samochod(int cena);
	~Samochod();
	// gettery
	int get_cena();
	int get_liczba_drzwi();
	// settery
	void set_cena(int cena);
	void set_liczba_drzwi(int liczba_drzwi);
	void zmiana(const char* imie,const char* nazwisko);
	void WRS(float procent,int cena);
	void piszdane();
};
