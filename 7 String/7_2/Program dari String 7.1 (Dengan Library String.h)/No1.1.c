#include<stdio.h>
#include<string.h>
#define MAX 100

int main()
{
    char kalimat[MAX];

    puts("=== Fungsi Menghitung Panjang Dari String ===");
    printf("Masukkan kalimat = ");
    fgets(kalimat, sizeof(kalimat), stdin);
    printf("Panjang Kalimat  = %d", strlen(kalimat) - 1);

    return 0;
}
