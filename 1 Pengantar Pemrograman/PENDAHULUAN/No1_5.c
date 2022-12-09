#include<stdio.h>

int main()
{
    float bil1, bil2;

    printf("Insert Value:\n");
    scanf("%f", &bil1);

    bil2 = bil1 * 50;

    printf("Hasil dikali 50: %4.1f", bil2);

    return 0;
}
