#include<stdio.h>
#define MAX 100

int bandingstr1(char[MAX], char[MAX]);
int pjgstr(char[MAX]);

int main()
{
    char kalimat1[MAX], kalimat2[MAX];
    int hsl;

    puts("============================================================");
    puts("==== Program Membandingkan 2 Buah String Case Sensitive ====");
    puts("============================================================");
    printf("Masukkan kalimat 1 : ");
    fgets(kalimat1, sizeof(kalimat1), stdin);
    fflush(stdin);

    printf("Masukkan kalimat 2 : ");
    fgets(kalimat2, sizeof(kalimat2), stdin);
    fflush(stdin);

    hsl = bandingstr1(kalimat1, kalimat2);

    //printf("Hasil perbandingan %s dengan %s ----> %d\n", kalimat1, kalimat2, hsl);

    if(hsl == 0)
        printf("\nKalimat yang anda masukkan SAMA");
    else
        printf("\nKalimat yang anda masukkan TIDAK SAMA");
}

int pjgstr(char str[MAX])
{
    int i = 0;

    while(str[i] != '\0')
        i++;

    return i - 1;
}

int bandingstr1(char asal[MAX], char tuj[MAX])
{
    int sama = 0;

    for(int i = 0; i < pjgstr(asal); i++){
        if(asal[i] == tuj[i]){
            continue;
            }
        else if(asal[i] > tuj[i]){
            sama = 1;
            break;
        }
        else {
            sama = -1;
            break;
        }
    }

    return sama;
}
