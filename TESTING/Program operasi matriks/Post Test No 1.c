#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void input(void);
void penjumlahan(void);
void pengurangan(void);
void perkalian(void);

int ordo, pilih, nilai1[MAX][MAX], nilai2[MAX][MAX], total[MAX][MAX];

int main() {
    puts("Operasi Matriks");
    puts("1. +");
    puts("2. -");
    puts("3. X");
    printf("Pilih operasi = ");
    scanf("%d", &pilih);
    if(pilih == 1) {
        input();
        penjumlahan();
    }
    else if(pilih == 2) {
        input();
        pengurangan();
    }
    else if(pilih == 3) {
        input();
        perkalian();
    }
    else {
        printf("Error input! Try Again");
        exit(0);
    }
}

void input(void) {
    printf("Masukkan Ordo Matriks = ");
    scanf("%d", &ordo);

    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            total[i][j] = 0;
        }
    }

    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            printf("Matriks[%d][%d] = ", i, j);
            scanf("%d", &nilai1[i][j]);
            fflush(stdin);
        }
    }
    puts(" ");
    //Print Matriks 1
    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            printf(" %d", nilai1[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            printf("Matriks[%d][%d] = ", i, j);
            scanf("%d", &nilai2[i][j]);
            fflush(stdin);
        }
    }
    puts(" ");
    // Print Matriks 2
    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            printf(" %d", nilai2[i][j]);
        }
        printf("\n");
    }
    puts(" ");
}

void penjumlahan(void) {
    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            total[i][j] = nilai1[i][j] + nilai2[i][j];
            printf(" %d", total[i][j]);
        }
        printf("\n");
    }
}

void pengurangan(void) {
    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            total[i][j] = nilai1[i][j] - nilai2[i][j];
            printf(" %d", total[i][j]);
        }
        printf("\n");
    }
}

void perkalian(void) {
    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            total[i][j] = nilai1[i][j] * nilai2[i][j];
            printf(" %d", total[i][j]);
        }
        printf("\n");
    }
}
