#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
    static int a[12][12], b, c, *d, e, f, g;
    char h[8],*i;

    menu1:
    g=1;
    for(e=0;e<12;e++) {
        for(f=0;f<12;f++)
            a[e][f]=48;
    }

    menu2:
    system("cls");
    d=&a;
    printf("\n\r");

    for(e=1;e<13;e++) {
        for(f=1;f<13;f++)
            printf("%2c",*d++);
            puts(" ");
    }

    if(g>1) {
        printf("\n Ketik 'lanjut' untuk melanjutkan.");
        printf("\n Ketik 'ulang' untuk mengulang dari awal.");
        printf("\n Ketik 'exit' untuk keluar.\n ");
        gets(h);
        gets(h);
        i=strlwr(h);
    if(strcmp(i,"lanjut")==0) {
        g=1;
        goto menu2;
    }
    else if(strcmp(i,"ulang")==0)
        goto menu1;
    else if(strcmp(i,"exit")==0);
    else
        goto menu2;
    }
    else {
    g++;
    printf("\n Masukkan koordinat matrix dengan jarak 1 - 12 …\n ");
    scanf("%d%d",&b,&c);
    -b;

    -c;

    a[b][c]=120;
    goto menu2;
    }
}
