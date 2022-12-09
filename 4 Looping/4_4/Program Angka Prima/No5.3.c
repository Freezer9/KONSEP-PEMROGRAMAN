#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ke=1, bil=2, n, pembagi, prima;
    char jawab;

    do{ ke=1;
        bil=2;
        printf("Masukkan angka prima ke-n : ");
        scanf("%d", &n);
    while(ke<=n){
        prima=1;
        for (pembagi=2; pembagi<bil; pembagi++){
            if(bil%pembagi == 0){
                    prima=0;
            }
        }
        if (prima){
            printf("%d ", bil);
            ke++;
        }
        bil++;
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

