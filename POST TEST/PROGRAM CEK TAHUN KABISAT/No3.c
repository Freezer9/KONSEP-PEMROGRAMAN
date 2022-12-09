#include<stdio.h>

int main()
{
    int bil, tahun;

    puts("Cek Tahun Kabisat");
    printf("Masukkan Tahun: ");
    scanf("%d", &bil);

    if(bil%400==0){
        printf("Tahun Kabisat\n");
    }else if(bil%100==0){
        printf("Bukan Tahun Kabisat\n");
    }else if(bil%4==0){
        printf("Tahun Kabisat\n");
    }else{
        printf("Bukan Tahun Kabisat\n");
    }

    return 0;

}
