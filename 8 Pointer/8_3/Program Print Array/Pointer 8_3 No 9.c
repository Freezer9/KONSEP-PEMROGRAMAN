#include<stdio.h>
#define MAX 100

int fpointer (int[MAX]);

int main() {
    int array1[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 10};
    fpointer(array1);
}

int fpointer (int array[MAX]) {
    for (int i = 0; i < 10; i++) {
        printf("Array[%d] = %d\n", i, array[i]);
    }
    return 0;
}
