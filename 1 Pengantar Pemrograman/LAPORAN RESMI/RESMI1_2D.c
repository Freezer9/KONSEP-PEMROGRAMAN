#include<stdio.h>
#include<stdint.h>

int main()
{
    int bil1, bil2, sum, quad1, quad2;
    float avr;

    puts("Mathematics probllem");
    printf("Insert Length: ");
    scanf("%i", &bil1);

    printf("Insert wide: ");
    scanf("%i", &bil2);

    sum = bil1 + bil2;
    avr = sum / 2.0;
    quad1 = bil1 * bil1;
    quad2 = bil2 * bil2;

    printf("The sum of %i and %i is %i\n", bil1, bil2, sum);
    printf("The average of %i is %f\n", sum, avr);
    printf("The square of %i is %i\n", bil1, quad1);
    printf("The square of %i is %i\n", bil2, quad2);;

    return 0;
}
