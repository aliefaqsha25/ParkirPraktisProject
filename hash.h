#ifndef HASH_H
#define HASH_H

#include "kendaraan.h"

extern Kendaraan* hashTable[TABLE_SIZE];

int hashFunction(char plat[]);
void insertHash(Kendaraan *k);
void searchHash(char plat[]);

#endif
