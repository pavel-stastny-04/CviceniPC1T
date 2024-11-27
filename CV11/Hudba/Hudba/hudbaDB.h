#pragma once

#define ZNACKA_SIZE 50

struct t_auto
{
    char  autor[ZNACKA_SIZE];
    int   rok;
    char album[50];
    struct t_auto* dalsi;
};

void add(char* znacka, char album[], int rok, struct t_auto** uk_prvni);
void del(int rok, struct t_auto** uk_prvni);
