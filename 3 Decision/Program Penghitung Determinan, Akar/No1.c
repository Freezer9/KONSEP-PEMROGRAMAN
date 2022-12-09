#include<stdio.h>
#include<math.h>

float input_float(char pesan[]){
    float nilai;

    printf("%s", pesan);
    scanf("%f", &nilai);

    return nilai;
}

int main()
{
    float a = input_float("Masukkan nilai a: "),
          b = input_float("Masukkan nilai b: "),
          c = input_float("Masukkan nilai c: "),
          x1, x2;

    float D = b * b - 4*a*c;

    if(D > 0){
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
    }else if (D < 0){
        x1 = -b / (2*a) + (sqrt(-D) / (2*a));
        x2 = -b / (2*a) - (sqrt(-D) / (2*a));
    }else
        x1 = x2 = -b / (2*a);

    printf("\nNilai Determinan: %g\n akar nilai x1 = %g nilai x2 = %g ", D, x1, x2);
}
