// Bourka.cpp : Defines the entry point for the application.
//

#include "Bourka.h"

using namespace std;


int main()
{
	float time = 0; //s
	long speed = 340.0; //m*s^-1
	printf("Zadej cas uplynuly mezi bleskem a hromem v sekundach: ");
	scanf_s("%f", &time);
	printf("Misto uderu blesku je od tebe vzdalene %lf metru, coz je %lf mili\n\n", time * speed, (time * speed) * 0.000621371);

	float vect1x = 0;
	float vect1y = 0;
	float vect2x = 0;
	float vect2y = 0;
	printf("Zadej prvni 2D vektor: ");
	scanf("%f %f", &vect1x, &vect1y);
	printf("\nZadej druhy 2D vektor: ");
	scanf("%f %f", &vect2x, &vect2y);
	printf("Soucet zadanych vektoru je (%f, %f)\n", vect1x + vect2x, vect1y + vect2y);


	return 0;
}
