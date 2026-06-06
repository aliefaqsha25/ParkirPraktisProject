#include <stdio.h>
#include "bst.h"
#include "hash.h"
#include "vip.h"
#include "sort.h"

void kendaraanKeluar(Node** root){

    int id;
    int found = 0;

    printf("Masukkan ID Kendaraan Keluar : ");
    scanf("%d", &id);

    for(int i = 0; i < jumlahKendaraan; i++){

        if(kendaraanList[i].id == id){

            found = 1;

            for(int j = i; j < jumlahKendaraan - 1; j++){
                kendaraanList[j] = kendaraanList[j + 1];
            }

            jumlahKendaraan--;

            break;
        }
    }

    if(found){

        *root = deleteBST(*root, id);

        printf("\nKendaraan berhasil keluar\n");
    }

    else{

        printf("\nData tidak ditemukan\n");
    }
}

int main(){

    Node* root = NULL;

    int pilihan;

    do{

        printf("\n===== SISTEM PARKIR PINTAR =====\n");

        printf("1. Tambah Kendaraan\n");
        printf("2. Cari Kendaraan\n");
        printf("3. Tampilkan Semua\n");
        printf("4. Tampilkan VIP\n");
        printf("5. Sorting\n");
        printf("6. Kendaraan Keluar\n");
        printf("7. Exit\n");

        printf("Pilih Menu : ");
        scanf("%d", &pilihan);

        if(pilihan == 1){

            Kendaraan k;

            printf("ID : ");
            scanf("%d", &k.id);

            printf("Plat : ");
            scanf("%s", k.plat);

            printf("Nama : ");
            scanf(" %[^\n]", k.nama);

            printf("VIP (1/0): ");
            scanf("%d", &k.vip);

            root = insertBST(root, k);

            kendaraanList[jumlahKendaraan] = k;

            insertHash(&kendaraanList[jumlahKendaraan]);

            jumlahKendaraan++;

            if(k.vip == 1){
                insertVIP(k);
            }

            printf("\nData berhasil ditambahkan\n");
        }

        else if(pilihan == 2){

            char plat[20];

            printf("Masukkan Plat : ");
            scanf("%s", plat);

            searchHash(plat);
        }

        else if(pilihan == 3){

            inorder(root);
        }

        else if(pilihan == 4){

            tampilVIP();
        }

        else if(pilihan == 5){

            tampilSorting();
        }

        else if(pilihan == 6){

            kendaraanKeluar(&root);
        }

    }while(pilihan != 7);

    return 0;
}