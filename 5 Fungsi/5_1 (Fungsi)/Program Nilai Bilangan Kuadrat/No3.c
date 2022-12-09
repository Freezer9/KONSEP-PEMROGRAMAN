#include<stdio.h>
#include<math.h>
float kuadrat(float);

int main()
{
    float x, hasil;

    printf("Masukkan Nilai Bilangan Kuadrat: ");
    scanf("%g", &x);
    hasil = kuadrat(x);
    printf("Hasil kuadrat dari %g adalah %g", x, hasil);

    return 0;
}

float kuadrat(float bil)
{
    return (pow(bil,2));
}
