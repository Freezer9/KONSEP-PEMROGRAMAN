#include<stdio.h>

int main()
{
    int bil1, ke, total=0;
    char kar;

    do{
        printf("Masukkan bilangan ke-%i: ", ke = ke + 1);
        scanf("%i", &bil1);
        fflush(stdin);
        printf("Mau memasukkan data lagi [y/t] ?" );
        scanf("%c", &kar);
        total += bil1;
    }while((kar == 'y') || (kar == 'Y'));

    printf("Hasil Akhir = %i", total);
    return 0;
}
