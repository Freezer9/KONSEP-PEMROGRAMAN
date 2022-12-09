#include<stdio.h>
#define MAX 100

int copystr(char [MAX], char [MAX]);

int main()
{
    int kalimat[MAX], hsl[MAX];

    puts("==== Program Copy String ====");
    printf("Masukkan kalimat = ");
    fgets(kalimat, sizeof(kalimat), stdin);

    copystr(kalimat, hsl);

    printf("Kalimat awal  = %s", kalimat);
    printf("Kalimat akhir = %s", hsl);

    return 0;
}

int copystr(char asal[MAX], char tuj[MAX])
{
    int i;

    for(i = 0; asal[i + 1]; i++){
        tuj[i] = asal[i];
    }
}
