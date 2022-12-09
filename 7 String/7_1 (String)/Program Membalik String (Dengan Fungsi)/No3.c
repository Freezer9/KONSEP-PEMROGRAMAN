#include<stdio.h>
#define MAX 100

int pjgstr(char[MAX]);
int balikstr(char[MAX]);

int main()
{
    char kalimat[MAX];

    puts("=== Fungsi Membalik String (Max = 100 kata) ===");
    printf("Masukkan kalimat = ");
    fgets(kalimat, sizeof(kalimat), stdin);
    printf("Panjang Kalimat  = %d\n", pjgstr(kalimat));

    printf("Hasil balik      = ");
    balikstr(kalimat);
    puts(" ");
    return 0;
}

int pjgstr(char str[MAX])
{
    int i = 0;

    while(str[i] != '\0') {
        i++;
    }

    return i - 1;
}

int balikstr(char str[MAX])
{
    int pjg = pjgstr(str);

    while(pjg--){
        printf("%c", str[pjg]);
    }
}
