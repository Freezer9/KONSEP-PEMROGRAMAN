#include<stdio.h>
#define MAX 5

int main()
{
    char nama[MAX], nama1[MAX], nama2[MAX];

    puts("==== Membandingkan scanf, gets dan fgets ====");
    printf("Masukkan Kalimat = ");
    scanf("%c", nama);
    printf("Hasil akhir scanf = %s", nama);
    fflush(stdin);
    printf("\nMasukkan Kalimat = ");
    gets(nama);
    printf("Hasil akhir gets  = %s", nama);
    fflush(stdin);
    printf("\nMasukkan Kalimat = ");
    fgets(nama, sizeof(nama), stdin);
    printf("Hasil akhir fgets = %s", nama);

    return 0;}

