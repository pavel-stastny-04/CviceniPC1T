#include <stdio.h>
#include "VectorMath.h"
#include <math.h>

struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ) {
	
	struct vector3d out;

	switch (typ)
	{
	case soucet:
		out.x = u.x + v.x;
		out.y = u.y + v.y;
		out.z = u.z + v.z;
		break;
	case skalarniSoucin:
		out.x = u.x * v.x + u.y * v.y + u.z * v.z;
		out.y = 0;
		out.z = 0;
		break;
	case vektorovySoucin:
		out.x = u.y * v.z - u.z * v.y;
		out.y = u.z * v.x - u.x * v.z;
		out.z = u.x * v.y - u.y * v.x;
		break;
	default:
		printf("Neplatny vstup: %d\n", typ);
		break;
	}
	return out;
}

void tisk(struct vector3d u) {
	printf("vektor je (%f, %f, %f)\n", u.x, u.y, u.z);
	printf("Jeho velikost |u| je: %f\n", sqrt(u.x * u.x + u.y * u.y + u.z * u.z));
}

struct vector3d loadVect(unsigned int id) {
	struct vector3d out;
	printf("Zadej %d. vektor, souradnice oddel \", \":", id);
	scanf("%f, %f, %f", &out.x, &out.y, &out.z);
	return out;
}