#include<stdio.h>

int main()
{
    int i, j, k;
    char jawab;

    do{
        printf("Masukkan Berapa Pyramid: ");
        scanf("%d", &j);
    for(i = 1; i <= j; i++){
        for(k = 1; k <= i; k++){
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
