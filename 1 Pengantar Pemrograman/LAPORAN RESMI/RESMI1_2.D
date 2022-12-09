#include<stdio.h>
#include<stdint.h>

int main()
{
    int bil1, bil2, sum, quad;
    float avr;

    puts("Mathematics probllem");
    printf("Insert Length: ");
    scanf("%i", bil1);

    fflush(stdin);

    printf("Insert wide: ");
    scanf("%i", bil2);

    sum = bil1 + bil2;
    avr = sum / 2;
    sqr1 = bil1 ** bil1;
    sqr2 = bil2 ** bil2;

    printf("The sum of %i and %i is %i", bil1, bil2, sum);
    printf("The average of %i with %i is %i", bil1, bil2, avr);
    printf("The square of %i is %i", bil1, sqr1);
    printf("The square of %i is %i", bil2, sqr2);

    return 0;
}
