// 08.cpp : Defines the entry point for the application.
//
#include <stdio.h>
#include "stastny.h"

int main()
{
	float ranges[12][2] = { 1.5, 2.8, 1.6, 2.0, 1.5, 2.8, 3.6, 7.5, 1.5, 4.8, 2.6, 7.5, 5.1, -2.3, 1.5, 6.2, 2.5, 8.8, -0.3, 9.5, 5.5, -9.5, 9.9, -2.3 };
	for (int i = 0; i < 12; i += 2) {
		float outz = 0;
		float outk = 0;
		int meets = prunik(ranges[i][0], ranges[i][1], ranges[i + 1][0], ranges[i + 1][1], &outz, &outk);
		if (meets) {
			printf("%d. (%f, %f) a (%f, %f)    \t->    Ma prunik na rozsahu (%f, %f)\n", i / 2, ranges[i][0], ranges[i][1], ranges[i + 1][0], ranges[i + 1][1], outz, outk);
		}
		else {

			printf("%d. (%f, %f) a (%f, %f)    \t->    Nema prunik\n", i / 2, ranges[i][0], ranges[i][1], ranges[i + 1][0], ranges[i + 1][1]);
		}
	}
	float range1z = 0;
	float range1k = 0;
	float range2z = 0;
	float range2k = 0;
	float outz = 0;
	float outk = 0;
	printf("Zadej 1. interval: ");
	scanf("%f, %f", &range1z, &range1k);
	printf("Zadej 2. interval: ");
	scanf("%f, %f", &range2z, &range2k);
	int meets = prunik(range1z, range1k, range2z, range2k, &outz, &outk);
	if (meets) {
		printf("(% f, % f) a (% f, % f)    \t->    Ma prunik na rozsahu(% f, % f)\n", range1z, range1k, range2z, range2k, outz, outk);
	}
	else {

		printf("(%f, % f) a (% f, % f)    \t->    Nema prunik\n", range1z, range1k, range2z, range2k);
	}


	return 0;
}
