#include<stdio.h>

int main()
{
    int i, bil, hasil=1;

    printf("Masukkan Bilangan: ");
    scanf("%d", &bil);

    printf("Hasil Faktorial Bilangan %d \n", bil);
    for(i = 1;i <= bil;i++){
        hasil = i * hasil;
        printf("%d ", i);
    if(i<bil)
        printf(" * ");
    }
    printf("Hasil = %d", hasil);

    return 0;
}
