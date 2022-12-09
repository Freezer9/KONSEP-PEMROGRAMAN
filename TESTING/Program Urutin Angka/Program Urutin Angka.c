#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {
    static int a,b[16],c,d;
    char e[16],*f;

    menu:
    printf("\n Angka sebelum diurutkan …\n");
        for(a=1;a<13;a++) {
            printf(" Angka ke %d = ",a);
            scanf("%d",&b[a]);
    }

    printf("\n Angka setelah diurutkan …\n");
    for(a=1;a<13;a++) {
        for(d=a+1;d<13;d++) {
            if((b+a)>(b+d)) {
                c = *(b+d);
                *(b+d) = *(b+a);
                *(b+a) = c;
            }
        }
        printf(" Angka ke %d = %d\n", a,*(b+a));
    }

    printf("\n Ketik 'exit' untuk keluar …\n");
    gets(e);
    printf(" ");
    gets(e);
    f=strlwr(e);

    if(strcmp(f,"exitd")==0);
        else {
            system("cls");
    goto menu;
    }
}
