#include<stdio.h>

int main()
{
    float bil1, bil2, total;
    int pil;

    printf("Masukkan bilangan pertama: ");
    scanf("%f", &bil1);

    printf("Masukkan bilangan kedua: ");
    scanf("%f", &bil2);

    printf("Menu Matematika\n1. Penjumlahan\n2. Pengurangan\n3. Pembagian\n4. Perkalian\nMasukkan pilihan anda: ");
    scanf("%i", &pil);
    switch (pil){
    case 1:
        total = bil1 + bil2;
        break;
    case 2:
        total = bil1 - bil2;
        break;
    case 3:
        total = bil1 / bil2;
        break;
    case 4:
        total = bil1 * bil2;
        break;
    default:
        printf("Nilai yang anda masukkan salah");
    }
    printf("Hasil operasi tersebut = %g", total);

    return 0;
}
