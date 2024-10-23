// Vety.cpp : Defines the entry point for the application.
//


#include "Vety.h"

#include <ctype.h>
#include <string.h>

unsigned int pocetPismen(char text[]) {
	unsigned int chars = 0;
	char isEnd = 0;
	unsigned int i = 0;
	while (!isEnd) {
		if (isalpha(text[i])) {
			chars++;
		}
		if (text[i] == '\0') {
			isEnd = 1;
		}
		i++;
	}
	return chars;
}

unsigned int pocetCisel(char text[]) {
	unsigned int nums = 0;
	char isEnd = 0;
	unsigned int i = 0;
	while (!isEnd) {
		if (isdigit(text[i])) {
			nums++;
		}
		if (text[i] == '\0') {
			isEnd = 1;
		}
		i++;
	}
	return nums;
}

int maxWordLength(char text[]) {
	unsigned int i = 0;
	char isEnd = 0;
	int sum = 0;
	int maxSum = 0;
	while (!isEnd) {
		if (isalpha(text[i]) || isdigit(text[i])) {
			sum++;
			if (sum > maxSum) {
				maxSum = sum;
			}
		}
		if (!(isalpha(text[i]) || isdigit(text[i])))
			sum = 0;
		if (text[i] == '\0') {
			isEnd = 1;
		}
		i++;
	}
	return maxSum;
}

int main()
{
	char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";

	printf("Analzyovany text:\n%s\n\n", text);
	printf("Pocet pismen : %d\n", pocetPismen(text));
	printf("Pocet cisel : %d\n", pocetCisel(text));
	printf("Nejvetsi delka slova : %d\n", maxWordLength(text));

	return 0;
}
