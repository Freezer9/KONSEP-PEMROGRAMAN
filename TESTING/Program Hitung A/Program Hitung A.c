#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct hurufa {
    int hurufA;
    int random;
    char input[MAX];
} kata;

void hitungA(struct hurufa);

int main() {
    printf("Masukkan kalimat : ");
    gets(kata.input);
    hitungA(kata);
    printf("Jumlah huruf a adalah %d", kata.hurufA);
}

void hitungA(struct hurufa kataA) {
    for(int i = 0; i < MAX; i++) {
        if(kataA.input[i] == 'a' || kataA.input[i] == 'A') {
            kata.hurufA++;
        }
        else {
            kata.random++;
        }
    }
}
