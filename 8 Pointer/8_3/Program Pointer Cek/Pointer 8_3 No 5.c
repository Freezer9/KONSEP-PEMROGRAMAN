#include<stdio.h>

int main() {
    int *i;
    int j=10, k, m[]={2, 5};
    int **l;

    i = m;
    printf("%d\n", i);
    i++;
    printf("%d\n", i);
    *i = j;
    printf("%d\n", *i);
    j = *i;
    printf("%d\n", j);
    i = &j;
    printf("%d\n", i);
    k = *(&j);
    printf("%d\n", k);
    l = &i;
    printf("%d\n", l);
}
