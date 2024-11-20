// 09.cpp : Defines the entry point for the application.
//

#include "09.h"
#include <stdio.h>
#include "VectorMath.h"

int main()
{
	char iterator = 0;
	do {
		int operaceSel;
		struct vector3d first;
		struct vector3d second;
		printf("Zadej pozadovanou operaci:");
		printf("\n\t1: vektorovy soucet\n\t2: skalarni soucin\n\t3: vektorovy soucin\n\t10: ukoncit program\n: ");
		scanf("%d", &operaceSel);
		struct vector3d out;
		switch (operaceSel)
		{
		case 2:
			first = loadVect(1);
			second = loadVect(2);
			out = operace(first, second, (typOperace)operaceSel);
			printf("Skalarni soucin zadanych vektoru je %f.\n", out.x);
			break;
		case 10:
			iterator = 1;
			printf("bye\n");
			break;
		default:
			first = loadVect(1);
			second = loadVect(2);
			out = operace(first, second, (typOperace)operaceSel);
			printf("Vysledny ");
			tisk(out);
			break;
		}
	} while (!iterator);
	return 0;
}
