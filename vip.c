#include <stdio.h>
#include "vip.h"

Kendaraan vipQueue[MAX];
int vipCount = 0;

void insertVIP(Kendaraan data){

    vipQueue[vipCount] = data;
    vipCount++;

    for(int i = vipCount - 1; i > 0; i--){

        if(vipQueue[i].vip > vipQueue[i - 1].vip){

            Kendaraan temp = vipQueue[i];
            vipQueue[i] = vipQueue[i - 1];
            vipQueue[i - 1] = temp;
        }
    }
}

void tampilVIP(){

    if(vipCount == 0){

        printf("\nTidak ada kendaraan VIP\n");
        return;
    }

    printf("\n===== KENDARAAN VIP =====\n");

    for(int i = 0; i < vipCount; i++){

        printf("ID      : %d\n", vipQueue[i].id);
        printf("Plat    : %s\n", vipQueue[i].plat);
        printf("Pemilik : %s\n", vipQueue[i].nama);

        printf("----------------------\n");
    }
}