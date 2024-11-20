#pragma once
enum typOperace { soucet = 1, skalarniSoucin, vektorovySoucin };
struct vector3d
{
	float x;
	float y;
	float z;
};
struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ);

void tisk(struct vector3d u);

struct vector3d loadVect(unsigned int id);