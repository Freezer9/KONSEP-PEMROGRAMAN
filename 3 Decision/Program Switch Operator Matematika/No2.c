#include<stdio.h>

int main()
{
    int valid_operator = 1;
    //valid_operator diinisialisasi dengan logika 1
    char oprator;
    float num1, num2, result;

    printf("Masukkan 2 buah bilangan & sebuah operator\n");
    printf("Dengan format: Bilangan1 Operator Bilangan2\n");
    scanf("%f %c %f", &num1, &oprator, &num2);

    switch (oprator){
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        default:
            valid_operator = 0;
            break;}

    if(valid_operator)
        printf("\n%g %c %g is %g\n", num1, oprator, num2, result);
    else
        printf("Invalid operator!\n");

    return 0;
}
