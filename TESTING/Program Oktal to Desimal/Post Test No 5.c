#include<stdio.h>
#include<math.h>
#define MAX 10

int konversi(int);
int dec[MAX];

int main() {
    int num = 0;;
    puts("PROGRAM OKT to DEC\n");
    printf("Masukkan octal number = ");
    scanf("%d", &num);
    fflush(stdin);
    printf("Hasil bilangan oktal %d adalah %d",num, konversi(num));
}

int konversi(int num) {
    int i = 0, hasil;
    while (num > 0) {
        dec[i] = (num % 10) * pow(8, i);
        num /= 10;
        i++;
    }
    for(int i = 0; i < 10; i++) {
        hasil += dec[i];
    }

    return hasil;
}

