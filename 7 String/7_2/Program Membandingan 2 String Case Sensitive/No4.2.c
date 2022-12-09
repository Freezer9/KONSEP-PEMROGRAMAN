#include<stdio.h>
#include<string.h>
#define MAX 100

int main()
{
    char kalimat1[MAX], kalimat2[MAX];
    int hsl;

    puts("============================================================");
    puts("==== Program Membandingkan 2 Buah String Case Sensitive ====");
    puts("============================================================");
    printf("Masukkan kalimat 1 : ");
    fgets(kalimat1, sizeof(kalimat1), stdin);
    fflush(stdin);

    printf("Masukkan kalimat 2 : ");
    fgets(kalimat2, sizeof(kalimat2), stdin);
    fflush(stdin);

    kalimat1[strlen(kalimat1)] = '\0';
    kalimat2[strlen(kalimat2)] = '\0';
    hsl = strcmp(kalimat1, kalimat2);

    if(hsl == 0)
        printf("\nKalimat yang anda masukkan SAMA");
    else
        printf("\nKalimat yang anda masukkan TIDAK SAMA");
}

