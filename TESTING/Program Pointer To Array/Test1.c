#include<stdio.h>

int main() {
    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}, array2[10];
    int *ip1, *ip2 = array2;
    int *akhir = &array1[10];

    for(ip1 = &array1[0]; ip1 < akhir; ip1++) {
        *ip2++ = *ip1;
        printf("%i , ", *ip2);
    }

    return 0;
}
