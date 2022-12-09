#include<stdio.h>

int main()
{
    float ribu100, ribu50, ribu20, ribu10, ribu5, ribu2, ribu1, ribu05, ribu02, ribu01, sisa_akhir, jml_uang, sisa;

    printf("Masukkan nilai uang:\n");
    scanf("%f", &jml_uang);

    ribu100 = jml_uang/100000;1000;
    sisa = jml_uang - (ribu100*100000);
    printf("%f Lembar 100000\n", ribu100);

    ribu50 = sisa/50000;
    sisa = sisa - (ribu50*50000);
    printf("%f Lembar 50000\n", ribu50);

    ribu20 = sisa/20000;
    sisa = sisa - (ribu20*20000);
    printf("%f Lembar 20000\n", ribu20);

    ribu10 = sisa/10000;
    sisa = sisa - (ribu10*10000);
    printf("%f Lembar 10000\n", ribu10);

    ribu5 = sisa/5000;
    sisa = sisa - (ribu5*5000);
    printf("%f Lembar 5000\n", ribu5);

    ribu2 = sisa/2000;
    sisa = sisa - (ribu2*2000);
    printf("%f Lembar 2000\n", ribu2);

    ribu1 = sisa/1000;
    sisa = sisa - (ribu1*1000);
    printf("%f Lembar 1000\n", ribu1);

    ribu05 = sisa/500;
    sisa = sisa - (ribu05*500);
    printf("%f Keping 500\n", ribu05);

    ribu02 = sisa/200;
    sisa = sisa - (ribu02*200);
    printf("%f Keping 200\n", ribu02);

    ribu01 = sisa/100;
    sisa_akhir = sisa - (ribu01*100);
    printf("%f Keping 100\n", ribu01);
    printf("Sisa: %f",sisa_akhir);

    return 0;
}
