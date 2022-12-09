#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void arrAB(void);
void matC(void);

int arrA[MAX][MAX], arrB[MAX][MAX], arrC[MAX][MAX];
int ordo;

int main() {
    char pilihan;

    do{
        puts("======================================");
        puts("====  Program Menghitung Matriks  ====");
        puts("======================================");
        printf("Berapa Matriks (max 10): ");
        scanf("%i", &ordo);
        printf("\n");
        fflush(stdin);

        if(ordo > 10)
            ordo = MAX;

        arrAB();
        printf("\n");
        fflush(stdin);

        printf("\nMau lagi (y/t) ? ");
        scanf("%c", &pilihan);
        puts(" ");
    } while(pilihan == 'Y' || pilihan == 'y');

    return 0;
}

void arrAB(void) {

    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j< ordo; j++) {
            arrC[i][j] = 0;
        }
    }

    puts("---- Matriks A ----\n");
    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            printf("Ordo[%d][%d]: ", i, j);
            scanf("%d", &arrA[i][j]);
            arrC[i][j] += arrA[i][j];
            fflush(stdin);
        }
    }
    puts(" ");

    puts("---- Matriks B ----\n");
    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            printf("Ordo[%d][%d]: ", i, j);
            scanf("%d", &arrB[i][j]);
            arrC[i][j] += arrB[i][j];
            fflush(stdin);
        }
    }

    puts(" ");
    matC();
}

void matC(void) {

    for(int i = 0; i < ordo; i++) {
        printf("|");
        for(int j = 0; j < ordo; j++) {
            printf("%3i ", arrA[i][j]);
        }
        printf(" | + | ");
        for(int j = 0; j < ordo; j++) {
            printf("%3i ", arrB[i][j]);
        }
        printf(" | = | ");
        for(int j = 0; j < ordo; j++) {
            printf("%3i ", arrC[i][j]);
        }
        printf(" |\n");
    }
}
