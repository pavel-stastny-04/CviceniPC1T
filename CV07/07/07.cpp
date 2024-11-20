// 07.cpp : Defines the entry point for the application.
//

#include "07.h"
#include "body2d.h"
#define POCET_BODU 10
#include <stdio.h>

int main()
{
	int body[POCET_BODU][2] = { 5, 10,
								-14, 2,
								45, 4,
								-9, 8,
								58, -3,
								47, 5,
								-18, -86,
								75, 7,
								-25, 51,
								17, 98 };
	
	int inputX = 0;
	int inputY = 0;

	printf("Zadej Xovou souradnici: ");
	scanf("%d", &inputX);
	printf("Zadej Yovou souradnici: ");
	scanf("%d", &inputY);

	int nearestPointIndex = indexNejblizsi(POCET_BODU, body, inputX, inputY);
	printf("\nNejblizsi bod je na indexu %d, a je to bod (%d, %d)\n", nearestPointIndex, body[nearestPointIndex][0], body[nearestPointIndex][1]);

	float averageDist = prumernaVzdalenost(POCET_BODU, body, inputX, inputY);
	printf("Prumerna vzdalenost bodu cinni %f.\n", averageDist);

	float perimetr = 0;
	printf("Zadej perimetr: ");
	scanf("%f", &perimetr);
	vypisOkoli(POCET_BODU, body, inputX, inputY, perimetr);


	return 0;
}
