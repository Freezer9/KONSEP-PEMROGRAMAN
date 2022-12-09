#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f_to_i(float);
float i_to_cm(float);
float cm_to_m(float);

main()
{
    float nilai, inchi, centimeter, meter;

    puts("==== Program Konversi Feet to Inch, Centimeter, Meter ====");
    printf("Masukkan ukuran (dalam satuan feet): ");
    scanf("%g", &nilai);

    inchi = f_to_i(nilai);
    centimeter = f_to_i(i_to_cm(nilai));
    meter = f_to_i(i_to_cm(cm_to_m(nilai)));

    printf("\nHasil Konversi %g kaki adalah %g inchi",nilai, inchi);
    printf("\nHasil Konversi %g inchi adalah %g centimeter",inchi, centimeter);
    printf("\nHasil Konversi %g centimeter adalah %g meter\n",centimeter, meter);

    return 0;
}

float f_to_i(float feet)
{
    return(feet * 12);
}

float i_to_cm(float inch)
{
    return(inch * 2.54);
}

float cm_to_m(float centi)
{
    return(centi / 100);
}
