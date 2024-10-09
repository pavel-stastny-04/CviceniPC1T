// CV4.cpp : Defines the entry point for the application.
//

#include "CV4.h"

int jePrestupny(int rok) {
	if ((rok % 4 == 0) && (rok % 100 != 0)) {
		return 1;
	}
	else if (rok % 400 == 0) {
		return 1;
	}
	return 0;
}

int jeLichy(int rok) {
	if (rok % 2  != 0) {
		return 1;
	}
	return 0;
}

int main()
{
	int roky[] = { 1000, 2000, 2002, 2012, 2022, 2200, 2203, 2001, 1993, 2204 };

	printf("  Rok  | prestupny? | lichy?\n");
	printf("----------------------------\n");

	for (int i = 0; i < 10; i++) {
		printf(" %d  |     %d      |   %d\n", roky[i], jePrestupny(roky[i]), jeLichy(roky[i]));
	}
	return 0;
}
