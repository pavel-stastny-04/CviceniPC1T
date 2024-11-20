// 10.cpp : Defines the entry point for the application.
//

#include "10.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* file;
	file = fopen("D:\\AUD\\267153\\Nová složka\\CviceniPC1T\\10\\10\\Vstup.txt", "r");
	if (file == NULL) {
		return 1;
	}
	else {
		char znaky[255];
		int cisla = 0;
		int pismena = 0;
		int dots = 0;
		int spaces = 0;
		while (fscanf(file, "%s", &znaky) != EOF) {
			int i = 0;
			while (znaky[i] != '\0') {
				if (isalpha(znaky[i])) {
					pismena++;
				}
				else if (isdigit(znaky[i])) {
					cisla++;
				}
				else if (znaky[i] == '.') {
					dots++;
				}
				i++;
			}
			spaces++;
		}
		fclose(file);

		printf("Statistiky souboru Vstup.txt:\n Pismena: %d\n Cislice: %d\n Slova  : %d\n Vety   : %d\n", pismena, cisla, spaces, dots);

		file = fopen("D:\\AUD\\267153\\Nová složka\\CviceniPC1T\\10\\10\\Vystup.txt", "w");

		fprintf(file, "Statistiky souboru Vstup.txt:\n Pismena: %d\n Cislice: %d\n Slova  : %d\n Vety   : %d\n", pismena, cisla, spaces, dots);

		fclose(file);
	}
	return 0;
}
