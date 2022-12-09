#include<stdio.h>

int main()
{
    int jam, menit, bil1, bil2, total;

    puts("Konversi Jam dan menit menjadi menit");
    printf("Masukkan Berapa Jam dan Menit: ");
    scanf("%d %d", &bil1, &bil2);

    jam = bil1 * 60;
    menit = bil2;

    total = jam + menit;

    printf("Hasil Konversi: %d menit", total);
    printf("\n");

    return 0;
}
