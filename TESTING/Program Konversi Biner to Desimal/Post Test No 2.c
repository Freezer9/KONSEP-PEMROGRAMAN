#include<stdio.h>
#include<math.h>
#define MAX 10

int konversi(int);
int dec[MAX];

int main() {
    int num = 0;;
    printf("Input bilangan biner = ");
    scanf("%d", &num);
    fflush(stdin);
    printf("Bilangan desimalnya adalah %d", konversi(num));
}

int konversi(int num) {
    int i = 0, hasil;
    while (num > 0) {
        dec[i] = (num % 10) * pow(2, i);
        num /= 10;
        i++;
    }
    for(int i = 0; i < 10; i++) {
        hasil += dec[i];
    }

    return hasil;
}

