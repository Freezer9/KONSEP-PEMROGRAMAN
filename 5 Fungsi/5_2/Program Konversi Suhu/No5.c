#include<stdio.h>
#include<stdlib.h>
float konversi(float, char, char);

int main()
{
    float bil, hasil;
    char suhu, tuj;

    puts("==== Program Konversi Suhu Celcius (C), Fahrenheit (F), Reamur(R) ====");
    printf("Masukkan suhu sumber = ");
    scanf("%g", &bil);
    printf("Masukkan satuan asal = ");
    fflush(stdin);
    scanf("%c", &suhu);
    printf("Masukkan satuan tujuan = ");
    fflush(stdin);
    scanf("%c", &tuj);

    hasil = konversi(bil, suhu, tuj);
    if(hasil != 0)
       printf("Hasil konversi suhu %g %c = %g %c\n", bil, suhu, hasil, tuj);
    else
        printf("User Input Invalid!\n");

    return 0;
}

float konversi(float y, char x, char ke)
{
    float hasil;

    if(x == 'C' || x == 'c'){
        if(ke == 'R' || ke == 'r'){
            hasil = y * 4/5;
        }
        else if(ke == 'F' || ke == 'f'){
            hasil = y * 9/5 + 32;
        }
        else
            hasil = 0;
    }else if(x == 'F' || x == 'f'){
        if(ke == 'C' || ke == 'c'){
            hasil = y - 32 * 5/9;
        }
        else if(ke == 'R' || ke == 'r'){
            hasil = y - 32 * 4/9;
        }
        else
            hasil = 0;
    }else if(x == 'R' || x == 'r'){
        if(ke == 'C' || ke == 'c'){
            hasil = y * 5/4;
        }
        else if(ke == 'F' || ke == 'f'){
            hasil = y + 32 * 9/4;
        }
        else
            hasil = 0;
    }
    return(hasil);
}
