#include<stdio.h>

int main() {
    int a[5] = {2, 4, 8, 1, 23};
    int c =5;
    int *ptr1 = &c;
    int *ptr2 = a;

    for(int i = 0; i < 5; i++){
        printf("nilai a[%d] = %d\n", i, a[i]);
    }
    printf("nilai c = %d\n", c);
    printf("nilai *ptr1 = %d\n", *ptr1);
    printf("nilai ptr1 = %p\n", ptr1);
    printf("nilai *ptr1 = %d\n", *ptr1);
    printf("nilai ptr1 = %p\n", ptr1);
    printf("nilai *ptr2 = %d\n", *ptr2);
    printf("nilai ptr2 = %p\n", ptr2);
}
