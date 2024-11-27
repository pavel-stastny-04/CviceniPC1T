// Hudba.cpp : Defines the entry point for the application.
//

#include "Hudba.h"

#include <stdio.h>
#include <ctype.h>              // tolower
#include <stdlib.h>				// system

#include "hudbaDB.h"

struct t_auto* prvni = NULL; // globalni ukazatel na prvni auto

void OnAdd()
{
	char my_name[ZNACKA_SIZE];
	int my_year;
	char my_album[ZNACKA_SIZE];

	printf("\nZnacka : ");         // dotazeme se na polozky
	scanf_s("%s", my_name, ZNACKA_SIZE);
	while (getchar() != '\n');
	printf("\nRok : ");
	scanf_s("%d", &my_year);
	while (getchar() != '\n');
	printf("\nAlbum : ");
	scanf_s("%s", &my_album, ZNACKA_SIZE);
	while (getchar() != '\n');
	add(my_name, my_album, my_year, &prvni);         // volame pridavaci funkci
}

void OnDel()
{
	int my_year;

	printf("\nRok : ");
	scanf_s("%d", &my_year);
	while (getchar() != '\n');
	del(my_year, &prvni);         // volame mazaci funkci
}

void ShowCars()
{
	struct t_auto* aktAuto = prvni; // ukazatel na aktualni auto
	printf("\n\n");
	char pismeno = ' ';
	printf("Zadej pocatecni pismeno interpreta: ");
	scanf("%c", &pismeno);
	while (aktAuto) // prochazeni seznamu
	{
		if (tolower(aktAuto->autor[0]) == tolower(pismeno)) {
			printf("%s: %s, %d\n", aktAuto->autor, aktAuto->album, aktAuto->rok); // tisk radku
		}
		aktAuto = aktAuto->dalsi; // posun na dalsi auto
	}
	while (getchar() != '\n');
	getchar();
}


int main()
{
	char  cmd;

	add((char*)"The Prodigy", (char*)"Invaders Must Die", 2009, &prvni);
	add((char*)"Linkin Park", (char*)"Meteora", 2003, &prvni);
	add((char*)"Linkin Park", (char*)"Hybrid Theory", 2000, &prvni);
	add((char*)"AC/DC", (char*)"Highway to Hell", 1979, &prvni);
	add((char*)"Pendulum", (char*)"Immersion", 2010, &prvni);

	do
	{
		system("cls");		// smaze obrazovku
		printf("A: Pridat     ");
		printf("D: Smazat     ");
		printf("P: Tisk     ");
		printf("Q: Konec\n\n");

		cmd = tolower(getchar());

		while (getchar() != '\n');

		switch (cmd)
		{
		case 'a':
			OnAdd();					// volame pridani
			break;
		case 'd':
			OnDel();					// volame mazani
			break;
		case 'p':
			ShowCars();
			break;
		}
	} while (cmd != 'q');     // koncime az pri Q
	return 0;
}
