#include "CMakeProject1.h"
#include <stdio.h>
#include <math.h>

void nactiVektory(float a[3], float b[3]) {
	printf("Zadej prvni vektor: ");
	scanf("%f, %f, %f", &a[0], &a[1], &a[2]);
	printf("Zadej druhy vektor: ");
	scanf("%f, %f, %f", &b[0], &b[1], &b[2]);
	return;
}

void soucet(float a[3], float b[3], float c[3]) {
	for (int i = 0; i < 3; i++) {
		c[i] = a[i] + b[i];
	}
	return;
}

float velikost(float v[3]) {
	return sqrt(pow(v[0], 2) + pow(v[1], 2) + pow(v[2], 2));
}

float skalarniSoucin(float a[3], float b[3]) {
	return (a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}

void vektorovySoucin(float a[3], float b[3], float d[3]) {
	d[0] = a[1] * b[2] - a[2] * b[1];
	d[1] = a[2] * b[0] - a[0] * b[2];
	d[2] = a[0] * b[1] - a[1] * b[0];
	return;
}



int main()
{
	float a[3] = { 0, 0, 0 };
	float b[3] = { 0, 0, 0 };
	float c[3] = { 0, 0, 0 };
	float d[3] = { 0, 0, 0 };

	nactiVektory(a, b);

	soucet(a, b, c);
	vektorovySoucin(a, b, d);

	printf("Soucet zadanych vektoru je (%f, %f, %f)\n", c[0], c[1], c[2]);
	printf("Velikost prvniho vektoru je %f a velikost druheho vektoru je %f\n", velikost(a), velikost(b));
	printf("Skalarni soucin zadanych vektoru je %f\n", skalarniSoucin(a, b));
	printf("Vektorovy soucin je (%f, %f, %f)\n", d[0], d[1], d[2]);
	


	return 0;
}
