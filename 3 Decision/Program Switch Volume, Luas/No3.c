#include<stdio.h>

int main()
{
    int pilih;
    float kubus, jari, tinggi, vol;

    puts("1. Menghitung volume kubus");
    puts("2. Menghitung luas lingkaran");
    puts("3. Menghitung volume silinder");
    printf("Pilihan User: ");
    scanf("%i", &pilih);

    switch(pilih){
        case 1:
            printf("Masukkan panjang sisi kubus: ");
            scanf("%f", &kubus);
            printf("Volume kubus: %f", kubus * kubus * kubus);
            break;
        case 2:
            printf("Masukkan panjang jari-jari lingkaran: ");
            scanf("%f", &jari);
            printf("Luas lingkaran: %f", 3.14 * jari * jari);
            break;
        case 3:
            printf("Masukkan panjang jari-jari lingkaran & tinggi silinder: ");
            scanf("%f %f", &jari, &tinggi);
            printf("Volume silinder: %f", 3.14 * jari * jari * tinggi);
            break;
        default:
            printf("Error input!");
            break;
    }

    return 0;
}
