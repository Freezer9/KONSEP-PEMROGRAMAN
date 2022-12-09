#include<stdio.h>
#include<string.h>
#define MAX 100

int main()
{
    char asal[MAX], tuj[MAX];

    puts("==== Program Copy String ====");
    printf("Masukkan kalimat = ");
    fgets(asal, sizeof(asal), stdin);

    asal[strlen(asal) - 1] = '\0';

    strcpy(tuj, asal);
    printf("Kalimat awal  = %s \n", asal);
    printf("Kalimat akhir = %s \n", tuj);

    return 0;
}
