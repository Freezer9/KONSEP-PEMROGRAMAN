#include<stdio.h>

int main()
{
    int j, bil, ke = 0;
    char jawab;

    puts("Bilangan n+1, n+2, n+3, n+..");
    do{ ke =0;
        printf("Bilangan ke-: ");
        scanf("%d", &bil);

    while(ke <= bil){
        for(j = 1; j <= bil; j++){
        printf("%5d", ke);
        ke += j;
        }
    }
    fflush(stdin);
    printf("\napakah anda ingin keluar (y/t)?");
    jawab = getchar();
    fflush(stdin);

    if((jawab != 'y') && (jawab != 't')){
        printf("Error Invalid Operator");
        printf("\n");
        }
    while((jawab != 'y') && (jawab != 't')){
        fflush(stdin);
        printf("\napakah anda ingin keluar (y/t)?");
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
