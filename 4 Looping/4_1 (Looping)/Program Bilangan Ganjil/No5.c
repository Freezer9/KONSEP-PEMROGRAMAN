#include<stdio.h>

    int main()
    {
        int i, bil, hasil;

        printf("Bilangan Ganjil ke: ");
        scanf("%d", &bil);

        for(i = 1; i <= bil; i++){
            printf("%d ", hasil = i*2 - 1);
        }
        return 0;
    }
