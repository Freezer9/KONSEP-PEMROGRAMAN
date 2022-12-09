#include<stdio.h>

int main()
{
    int var_bulat = 32767;
    float var_pecahan1 = 339.2345678f;
    double var_pecahan2 = 3.4567e+40;
    char var_karakter = 'S';

    printf("Hasil Bulat %i\nHasil Pecahan 1 %ff\nHasil Pecahan 2 %e\nHasil Karakter %c\n",
           var_bulat, var_pecahan1, var_pecahan2, var_karakter);

    return 0;
}
