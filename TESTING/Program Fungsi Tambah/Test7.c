#include <stdio.h>

void TambahSatu(int X) {
    X++;

    printf("Nilai di dalam fungsi : %d\n", X);
}

int main(void) {
    int Bilangan;
    printf("Masukkan sebuah bilangan bulat : ");
    scanf("%d", &Bilangan);

    printf("\nNilai awal : %d\n", Bilangan);

    TambahSatu(Bilangan);

    printf("Nilai akhir : %d\n", Bilangan);
    return 0;
}
