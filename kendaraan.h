#ifndef KENDARAAN_H
#define KENDARAAN_H

#define MAX 100
#define TABLE_SIZE 10

typedef struct Kendaraan{
    int id;
    char plat[20];
    char nama[50];
    int vip;
} Kendaraan;

extern Kendaraan kendaraanList[MAX];
extern int jumlahKendaraan;

#endif