#include <stdio.h>
#include "stastny.h"

void _checkRange(float* zacatek, float* konec) {
	float buff = 0;
	if (*zacatek > *konec) {
		buff = *zacatek;
		*zacatek = *konec;
		*konec = buff;
	}
}

int prunik(float zacatek1, float konec1, float zacatek2, float konec2, float* vysl_zacatek, float* vysl_konec) {
	_checkRange(&zacatek1, &konec1);
	_checkRange(&zacatek2, &konec2);
	
	if (zacatek1 >= zacatek2 && zacatek1 <= konec2) {
		*vysl_zacatek = zacatek1;
	}
	else if (zacatek2 > zacatek1 && zacatek2 <= konec1) {
		*vysl_zacatek = zacatek2;
	}
	else {
		return 0;
	}
	if (konec1 >= konec2 && konec2 >= zacatek1) {
		*vysl_konec = konec2;
	}
	else if (konec2 > konec1 && konec1 >= zacatek2) {
		*vysl_konec = konec1;
	}
	else {
		return 0;
	}
	return 1;
}