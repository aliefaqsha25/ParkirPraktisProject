#include <stdio.h>
#include <string.h>
#include "hash.h"

Kendaraan* hashTable[TABLE_SIZE];

int hashFunction(char plat[]){

    int sum = 0;

    for(int i = 0; i < strlen(plat); i++){
        sum += plat[i];
    }

    return sum % TABLE_SIZE;
}

void insertHash(Kendaraan *k){

    int index = hashFunction(k->plat);

    hashTable[index] = k;
}

void searchHash(char plat[]){

    int index = hashFunction(plat);

    if(hashTable[index] != NULL &&
       strcmp(hashTable[index]->plat, plat) == 0){

        printf("\n===== DATA DITEMUKAN =====\n");

        printf("ID      : %d\n", hashTable[index]->id);
        printf("Plat    : %s\n", hashTable[index]->plat);
        printf("Pemilik : %s\n", hashTable[index]->nama);
    }

    else{

        printf("\nData tidak ditemukan\n");
    }
}
