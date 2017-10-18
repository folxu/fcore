#include "fcore.h"
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>
#include <time.h>
#include <conio.h>

using namespace std;

glownybohater::glownybohater() { } //???

void glownybohater::ZadajDMG()
{
	// Zadanie DMG w grze

	MainZadanyDMG = MainAtak + MainSila; // kiedys to bedzie ulepszone..
	cout << MainZadanyDMG;
}

void glownybohater::zaladujwalke(poboczna Baran)	// walka w tutorialu..
{
	int wybor;
	int codalej;

	cout << "====================" << endl;
	cout << "Co chcesz zrobic?" << endl;
	cout << "====================" << endl;

	cout << "1. Uderz przeciwnika!" << endl;
	cout << "2. Uzyj skilla!" << endl;
	cout << "3. Informacje o przeciwniku!" << endl;

	cout << endl;
	cout << "Twoj wybor: ";
	cin >> wybor;

	switch (wybor)
	{
	case 1:
		cout << "Przygotowywujesz sie do walki.." << endl;
		Sleep(1000);
		cout << "Wykonujesz cios!" << endl;
		cout << "Zadajesz przeciwnikowi: ";
		glownybohater::ZadajDMG();
		cout << " obrazen " << endl;
		cout << "Przeciwnikowi zostalo: ";
		Baran.PZostaloHP = Baran.PHP - MainZadanyDMG;
		cout << Baran.PZostaloHP;
		cout << " zdrowia " << endl;
		//Sleep(2000);
		if (Baran.PZostaloHP != 0)
		{
			while (Baran.PZostaloHP<0)
			{
				cout << "Jako ze przeciwnikowi zostalo: " << Baran.PZostaloHP << " musisz wykonac kolejny ruch!" << endl;
				cout << endl;
				cout << "1. Wykonaj kolejny cios!" << endl;
				cout << "2. Uzyj skilla i rozwal oponenta!" << endl;
				cout << "Twoj wybor: ";
				cin >> codalej;
				cout << endl;

				switch (codalej)
				{
				case 1:
					//glownybohater::ZadajDMG();
					break;
				case 2:
					//glownybohater::zaladujskille();
					break;
				default:
					cout << "Wybierz 1 lub 2!" << endl;
					break;
				}
				
			}

		}
		else
		{
			cout << "Brawo! Rozwaliles przeciwnika!!" << endl;
		}
		break;
	case 2:
		glownybohater::menuskille();
		//getch();
		break;
	case 3:
		cout << "Info o przeciwniku: " << endl;
		//getch();
		break;
	default:
		cout << "Wybierz 1,2,3" << endl;
		//getch();
		break;


	}
}

void glownybohater::zaladujwalke()
{
	// walka z innymi postaciami
}

void glownybohater::menuskille()		// menu do zaladujskille.
{
	if (MainPoziom >= 3)
	{
		glownybohater::zaladujskille();
	}
	else
	{
		cout << "Skille sa dostepne od poziomu 3!" << endl;
		cout << "Aktualnie posiadasz: " << MainPoziom << " poziom " << endl;
		cout << endl;
	}

}

void glownybohater::zaladujskille()
{
	cout << "Twoja lista skilli: " << endl;
	//getchar();
	// lista skilli 
}

