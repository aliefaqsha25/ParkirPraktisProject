#ifndef SORT_H
#define SORT_H

#include "kendaraan.h"

void swap(Kendaraan *a, Kendaraan *b);
int partition(Kendaraan arr[], int low, int high);
void quickSort(Kendaraan arr[], int low, int high);
void tampilSorting();

#endif