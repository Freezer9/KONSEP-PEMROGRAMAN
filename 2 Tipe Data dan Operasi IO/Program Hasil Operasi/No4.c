#include<stdio.h>

int main()
{
    int a = 12, b = 2, c = 3, d = 4;

    printf("Hasil dari %i %% %i adalah %i\n", a, b, a % b);
    printf("Hasil dari %i - %i adalah %i\n", a, c, a - c);
    printf("Hasil dari %i + %i adalah %i\n", a, b, a + b);
    printf("Hasil dari %i / %i adalah %i\n", a, d, a / d);
    printf("Hasil dari %i / %i * %i + %i %% %i adalah %i\n", a, d, d, a, d, a /d *d + a % d);
    printf("Hasil dari %i / %i / %i * %i - %i adalah %i\n", a, d, d, a, c, a %d / d* a - c);

    return 0;
}
