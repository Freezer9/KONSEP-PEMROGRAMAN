#include<stdio.h>

int main()
{
    int i, j, n;
    char jawab;

    puts("Input hasil Kotak");
    do{
        printf("Masukkan Berapa kali Program: ");
        scanf("%d", &j);
    for(i = 1; i <= j; i++){
        for(n =1; n <= j; n++){
            printf("%2d ", i);
        }
        printf("\n");
    }

    fflush(stdin);
    printf("apakah anda ingin keluar (y/t)?");
    jawab = getchar();
    fflush(stdin);

    if((jawab != 'y') && (jawab != 't')){
        printf("Error Invalid Operator");
        printf("\n");
        }
    while((jawab != 'y') && (jawab != 't')){
        fflush(stdin);
        printf("apakah anda ingin keluar (y/t)?");
        jawab = getchar();
        fflush(stdin);
    if((jawab != 'y') && (jawab != 't')){
        printf("Error Invalid Operator");
        printf("\n");
        }
        fflush(stdin);
    }
    }while(jawab == 't');
    puts("Selesai");

    return 0;
}
