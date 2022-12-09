#include<stdio.h>
#define MAX 100

int bandingstr2(char[MAX], char[MAX]);
int pjgstr(char[MAX]);

int main()
{
    char kalimat1[MAX], kalimat2[MAX];
    int hsl;

    puts("================================================================");
    puts("==== Program Membandingkan 2 Buah String Non-Case Sensitive ====");
    puts("================================================================");
    printf("Masukkan kalimat 1 : ");
    fgets(kalimat1, sizeof(kalimat1), stdin);
    fflush(stdin);

    printf("Masukkan kalimat 2 : ");
    fgets(kalimat2, sizeof(kalimat2), stdin);
    fflush(stdin);

    kalimat1[pjgstr(kalimat1)] = '\0';
    kalimat2[pjgstr(kalimat2)] = '\0';
    hsl = bandingstr2(kalimat1, kalimat2);

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

int bandingstr2(char asal[MAX], char tuj[MAX])
{
    int i, sama;

    for(i = 0; i < pjgstr(asal) || pjgstr(tuj); i++){
        if(asal[i] > tuj[i]){
            if(asal[i] != tuj[i]+32){
                sama = 0;
                break;
            }
        }
        else if(asal[i] < tuj[i]){
            if(asal[i] != tuj[i]-32){
                sama = 1;
                break;
            }
        }

    }

    return sama;
}

