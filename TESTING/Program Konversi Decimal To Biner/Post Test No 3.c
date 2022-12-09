#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int konversi(void);
int biner[MAX], dec;

int main() {
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &dec);
    fflush(stdin);
    konversi();
}

int konversi(void) {
    int i = 0, hasil;
    for(i = 0; dec != 0; i++) {
        biner[i] = dec % 2;
        dec /= 2;
    }
    dec = i;
    for(i = 0; i < dec; i++) {
        printf("%d", biner[dec - i - 1]);
    }
    return 0;
}
