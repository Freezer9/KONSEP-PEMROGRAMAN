#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ke=1, bil=2, n, pembagi, prima;

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
    return 0;
}
