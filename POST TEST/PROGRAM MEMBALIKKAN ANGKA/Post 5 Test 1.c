#include<stdio.h>
int balik(int);

int main()
{
    int input;

    puts("==== Program Membalikkan Angka ====\n");
    printf("Masukkan Bilangan Bulat: ");
    scanf("%d", &input);

    balik(input);
}

int balik(int dibalik)
{
    int sisa;
    int kebalik = 0;

    while ( dibalik != 0 ){
        sisa = dibalik % 10;
        kebalik  = kebalik * 10 + sisa;
        dibalik = dibalik / 10;
    }

    printf("Hasil setelah angka dibalik = %d\n", kebalik);
}
