#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void array_sekarang(int, int, int[MAX]);

int brp;

int main() {
    int isi[MAX], sisip, posisi;
    printf("Berapa jumlah elemen (maks 10) ? ");
    scanf("%d", &brp);
    fflush(stdin);
    for (int i = 0; i < brp; i++) {
        printf("data[%d] = ",i);
        scanf("%d", &isi[i]);
    }
    printf("Bilangan yang mau disisipkan : ");
    scanf("%d", &sisip);
    printf("Pada posisi ke-? ");
    scanf("%d", &posisi);
    array_sekarang(sisip, posisi, isi);
}

void array_sekarang(int sisip, int posisi, int isi[MAX]) {
    int change_panjang;
    change_panjang = brp + 1;
    while (brp >= posisi) {
        isi[brp + 1] = isi[brp];
        brp = brp - 1;
    }
    isi[posisi] = sisip;

    printf("\nElemen array setelah diinsert :\n");
    for(int i = 0; i < change_panjang; i++) {
        printf("Nilai[%d] = %d \n", i, isi[i]);
    }


}

