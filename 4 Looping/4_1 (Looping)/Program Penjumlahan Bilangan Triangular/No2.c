#include<stdio.h>

int main()
{
    int i, bil, hasil;

    puts("Penjumlahan Bilangan Triangular");
    printf("Masukkan Bilangan: ");
    scanf("%d", &bil);

    printf("Penjumlahan %i Bilangan\n", bil);
    for(i = bil; i >= 1; i--){
        hasil = 1 + hasil;
        printf("%i ", i);
        if(i != 1);
            printf("+ ");
        }
        printf("= %d", hasil);

        return 0;
}
