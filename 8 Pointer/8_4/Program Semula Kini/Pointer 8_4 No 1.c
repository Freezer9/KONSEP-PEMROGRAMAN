#include <stdio.h>

void naikkan_nilai(int *, float *);

int main(){
    int a = 3;
    float b = 7.5f;
    printf("SEMULA : a = %d b = %d\n", a, b);
    naikkan_nilai(&a, &b);
    printf("KINI : a = %d b = %d\n", a, b);
}

void naikkan_nilai(int *x, float *y){
    *x = *x + 2;
    *y = *y + 2.5f;
}
