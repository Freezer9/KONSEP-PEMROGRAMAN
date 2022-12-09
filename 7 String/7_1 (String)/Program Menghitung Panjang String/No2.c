#include<stdio.h>
#define MAX 20

int pjgstr(char[MAX]);

int main() {
    char kalimat[MAX];

    puts("=== Fungsi Menghitung Panjang Dari String ===");
    printf("Masukkan kalimat = ");
    fgets(kalimat, sizeof(kalimat), stdin);
    printf("Panjang Kalimat  = %d", pjgstr(kalimat));

    return 0;
}

int pjgstr(char str[MAX]){
    int i;
    for(i = 0; str[i] != '\0'; i++){}

    return i - 1;
}
