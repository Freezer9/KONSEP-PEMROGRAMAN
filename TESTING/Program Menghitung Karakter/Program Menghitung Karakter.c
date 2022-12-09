#include <stdio.h>
#include <string.h>

int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p,
q, r, s, t, u, v, w, x, y, z;

int main(){
    char kalimat[100];
    int jumlahKarakter;

    printf("Program Menghitung Jumlah Karakter\n\n");
    printf("Input String : ");
    gets(kalimat);

    jumlahKarakter = strlen(kalimat);
    printf("Jumlah Karakter : %d\n", jumlahKarakter);
    for(int in = 0; in < jumlahKarakter; in++){
        if(kalimat[in]=='a' || kalimat[in]=='A'){
            a++;
            printf("a = %d, ", a);
        }
        else if(kalimat[in]=='b' || kalimat[in]=='B'){
            b++;
            printf("b = %d, ", b);
        }
        else if(kalimat[in]=='c' || kalimat[in]=='C'){
            c++;
            printf("c = %d, ", c);
        }
        else if(kalimat[in]=='d' || kalimat[in]=='D'){
            d++;
            printf("d = %d, ", d);
        }
        else if(kalimat[in]=='e' || kalimat[in]=='E'){
            e++;
            printf("e = %d, ", e);
        }
        else if(kalimat[in]=='f' || kalimat[in]=='F'){
        f++;
            printf("f = %d, ", f);
        }
        else if(kalimat[in]=='g' || kalimat[in]=='G'){
            g++;
            printf("g = %d, ", g);
        }
        else if(kalimat[in]=='h' || kalimat[in]=='H'){
            h++;
            printf("h = %d, ", h);
        }
        else if(kalimat[in]=='i' || kalimat[in]=='I'){
            i++;
            printf("i = %d, ", i);
        }
        else if(kalimat[in]=='j' || kalimat[in]=='J'){
            j++;
            printf("j = %d, ", j);
        }
        else if(kalimat[in]=='k' || kalimat[in]=='K'){
            k++;
            printf("k = %d, ", k);
        }
        else if(kalimat[in]=='l' || kalimat[in]=='L'){
            l++;
            printf("l = %d, ", l);
        }
        else if(kalimat[in]=='m' || kalimat[in]=='M'){
            m++;
            printf("m = %d, ", m);
        }
        else if(kalimat[in]=='n' || kalimat[in]=='N'){
            n++;
            printf("n = %d, ", n);
        }
        else if(kalimat[in]=='o' || kalimat[in]=='O'){
            o++;
            printf("o = %d, ", o);
        }
        else if(kalimat[in]=='p' || kalimat[in]=='P'){
            p++;
            printf("p = %d, ", p);
        }
        else if(kalimat[in]=='q' || kalimat[in]=='Q'){
            q++;
            printf("q = %d, ", q);
        }
        else if(kalimat[in]=='r' || kalimat[in]=='R'){
            r++;
            printf("r = %d, ", r);
        }
        else if(kalimat[in]=='s' || kalimat[in]=='S'){
            s++;
            printf("s = %d, ", s);
        }
        else if(kalimat[in]=='t' || kalimat[in]=='T'){
            t++;
            printf("t = %d, ", t);
        }
        else if(kalimat[in]=='u' || kalimat[in]=='U'){
            u++;
            printf("u = %d, ", u);
        }
        else if(kalimat[in]=='v' || kalimat[in]=='V'){
            v++;
            printf("v = %d, ", v);
        }
        else if(kalimat[in]=='w' || kalimat[in]=='W'){
            w++;
            printf("w = %d, ", w);
        }
        else if(kalimat[in]=='x' || kalimat[in]=='X'){
            x++;
            printf("x = %d, ", x);
        }
        else if(kalimat[in]=='y' || kalimat[in]=='Y'){
            y++;
            printf("y = %d, ", y);
        }
        else if(kalimat[in]=='z' || kalimat[in]=='Z'){
            z++;
            printf("z = %d, ", z);
        }
        else
            printf(" ");
    }

    getch();
    return 0;
}
