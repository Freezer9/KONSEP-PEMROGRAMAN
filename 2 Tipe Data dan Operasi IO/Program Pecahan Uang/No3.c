#include<stdio.h>

int main()
{
    int ribu100, ribu50, ribu20, ribu10, ribu5, ribu2, ribu1, jml_uang, sisa;

    printf("Masukkan nilai uang:\n");
    scanf("%i", &jml_uang);

    ribu100 = jml_uang/100000;
    sisa = jml_uang - (ribu100*100000);
    printf("%d Lembar 100000\n", ribu100);

    ribu50 = sisa/50000;
    sisa = sisa - (ribu50*50000);
    printf("%d Lembar 50000\n", ribu50);

    ribu20 = sisa/20000;
    sisa = sisa - (ribu20*20000);
    printf("%d Lembar 20000\n", ribu20);

    ribu10 = sisa/10000;
    sisa = sisa - (ribu10*10000);
    printf("%d Lembar 10000\n", ribu10);

    ribu5 = sisa/5000;
    sisa = sisa - (ribu5*5000);
    printf("%d Lembar 5000\n", ribu5);

    ribu2 = sisa/2000;
    sisa = sisa - (ribu2*2000);
    printf("%d Lembar 2000\n", ribu2);

    ribu1 = sisa/1000;
    sisa = sisa - (ribu1*1000);
    printf("%d Lembar 1000\n", ribu1);

    return 0;
}
