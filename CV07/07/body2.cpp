#include "body2d.h"
#include <math.h>
#include <stdio.h>

float _findDist(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}


int indexNejblizsi(int velikost, int (*poleBodu)[2], int referencniX, int referencniY) {
	float maxDist = _findDist(poleBodu[0][0], poleBodu[0][1], referencniX, referencniY);
	int index = -1;
	velikost--;
	for (velikost; velikost >= 0; velikost--) {
		if (_findDist(poleBodu[velikost][0], poleBodu[velikost][1], referencniX, referencniY) < maxDist) {
			maxDist = _findDist(poleBodu[velikost][0], poleBodu[velikost][1], referencniX, referencniY);
			index = velikost;
		}
	}
	return index;
}

float prumernaVzdalenost(int velikost, int (*poleBodu)[2], int referencniX, int referencniY) {
	float members = 0;
	float velikostOrig = 0;
	velikost--;
	for (velikost; velikost >= 0; velikost--) {
		members += _findDist(poleBodu[velikost][0], poleBodu[velikost][1], referencniX, referencniY);
		velikostOrig++;
	}
	return members / velikostOrig;
}

void vypisOkoli(int velikost, int (*poleBodu)[2], int referencniX, int referencniY, float maxDist) {
	printf("Body v zadaném perimetru: \n");
	for (velikost; velikost >= 0; velikost--) {
		if (_findDist(poleBodu[velikost][0], poleBodu[velikost][1], referencniX, referencniY) < maxDist) {
			printf("\t%d.  (%d, %d)\n", velikost, poleBodu[velikost][0], poleBodu[velikost][1]);
		}
	}
	return;
}