#include<stdio.h>

int main()
{
    int bil1=0, ke=0, total=0, max=0, min=9999999, mean;
    char kar;

    do{
        ke++;
        printf("Masukkan bilangan ke-%i: ", ke);
        scanf("%f", &bil1);
        fflush(stdin);
        printf("Mau memasukkan data lagi [y/t] ?" );
        kar = getchar();

        printf("\n");
        if(bil1 > max){
            max = bil1;}
        if(bil1 < min){
            min = bil1;}
        total += bil1;
        mean = total/ke;
    }while((kar == 'y') || (kar == 'Y'));
    fflush(stdin);

    printf("Rata - rata = %g\n", mean);
    printf("Nilai Max   = %i\n", max);
    printf("Nilai Min   = %i\n", min);
    printf("Hasil Akhir = %i\n", total);
    return 0;
}
