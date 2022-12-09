#include<stdio.h>
#include<stdlib.h>

long int faktorial(int);

int main()
{
    long int hasil;
    int bil;
    puts("==== Program Menghitung Faktorial ====");
    printf("Masukkan Bilangan: ");
    scanf("%d", &bil);
    if(bil<0)
        printf("Bilangan harus positif!\n");
    else{
        hasil = faktorial(bil);
        printf("Nilai Faktorial %d adalah %ld\n", bil, hasil);
        }
}

long int faktorial(int x)
{
    long int hasil;

    if(x <= 1)
        return(1);
    else{
        hasil = x*faktorial(x - 1);
        return(hasil);
    }
}
