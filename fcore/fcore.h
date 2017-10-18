#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>
#include <time.h>
#include <conio.h>

using namespace std;

class poboczna
{
public:
	string imie = "Tutorial";			// zwany Baran
	int PAtak = 5;						// Atak => Hit => Default: 5
	int PObrona = 10;					// Obrona   |	Defaultowo [10]
	int PSila = 10;						// Sila     |	Defaultowo [100]
	int PHP = 100;						// HP       |	Defaultowo [100]
	int PZadanyDMG;						// Zliczenie Zadanych Obrazen
	int PZostaloHP;						// Ilosc HP jakie zostalo.

	// void PZadaneObrazenia();			// nie potrzebne atm
};

//          =========================================================================

class glownybohater
{

public:
	string imie;						// Imie okreslone na poczatku gry.
	int MainAtak = 2;					// Atak => Hit => Default: 2
	int MainObrona = 5;					// Obrona |		[Defaultowo 5]
	int MainSila = 1;						// Sila   |		[Defaultowo: 5]
	int MainHP = 50;					// Zdrowie|		[Defaultowo: 50 + zwiekszenie z lvlem]
	int MainZadanyDMG;					// Zliczenie zadanych obra¿eñ
	int MainZostaloHP;					// Ilosc HP jakie zostalo
	int MainPoziom = 1;					// Poziom => Na start 1lvl.

	glownybohater();
	void ZadajDMG();
	void zaladujwalke();
	void zaladujwalke(poboczna Baran);
	void menuskille();
	void zaladujskille();

	/*
	SOON:
	void zaladujwalke(pobocznaklasa Postac); // walka z inna postacia
	*/

};

class kolorki
{
public:
	HANDLE kbialy;			// ID 15
	HANDLE kniebieski;		// ID 1
	HANDLE kczerwony;		// ID 12
	HANDLE kblekitny;		// ID 11
	HANDLE kjasnozolty;		// ID 14
	HANDLE kzielony;		// ID 10
	HANDLE kzielonyciemny;	// ID 2

	kolorki();
	void kolorbialy();
	void kolorniebieski();
	void kolorczerwony();
	void kolorblekitny();
	void kolorjasnozolty();
	void kolorzielony();
	void kolorzielonyciemny();


};