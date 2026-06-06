#include <stdio.h>
#include <string.h>
#include "sort.h"

void swap(Kendaraan *a, Kendaraan *b){

    Kendaraan temp = *a;
    *a = *b;
    *b = temp;
}

int partition(Kendaraan arr[], int low, int high){

    char pivot[20];
    strcpy(pivot, arr[high].plat);

    int i = low - 1;

    for(int j = low; j < high; j++){

        if(strcmp(arr[j].plat, pivot) < 0){

            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);

    return i + 1;
}

void quickSort(Kendaraan arr[], int low, int high){

    if(low < high){

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void tampilSorting(){

    if(jumlahKendaraan == 0){

        printf("\nData kosong\n");
        return;
    }

    quickSort(kendaraanList, 0, jumlahKendaraan - 1);

    printf("\n===== DATA TERURUT =====\n");

    for(int i = 0; i < jumlahKendaraan; i++){

        printf("ID      : %d\n", kendaraanList[i].id);
        printf("Plat    : %s\n", kendaraanList[i].plat);
        printf("Pemilik : %s\n", kendaraanList[i].nama);

        printf("----------------------\n");
    }
}