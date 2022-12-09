#include<stdio.h>
#include<math.h>
#define PI 3.14

float luas_lingkaran(float);
float keliling_lingkaran(float);

main()
{
    float jari;

    puts("==== Program Penghitung Luas dan Jari Lingkaran ====");
    printf("Masukkan Jari-jari: ");
    scanf("%f", &jari);

    printf("Hasil Luas Lingkaran     = %g \n", luas_lingkaran(jari));
    printf("Hasil Keliling Lingkaran = %g \n", keliling_lingkaran(jari));

    return 0;
}

float luas_lingkaran(float luas)
{
    return(PI * luas * luas);
}

float keliling_lingkaran(float kel)
{
    return(2 * PI * kel);
}
