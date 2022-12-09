#include<stdio.h>
#include<string.h>
#define MAX 100

int main()
{
    char kalimat[MAX];

    puts("=== Fungsi Menghitung Panjang Dari String (Max = 100 kata) ===");
    printf("Masukkan kalimat = ");
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strlen(kalimat) - 1] = '\0';
    printf("Panjang Kalimat  = %s \n", strrev(kalimat));

    return 0;
}

