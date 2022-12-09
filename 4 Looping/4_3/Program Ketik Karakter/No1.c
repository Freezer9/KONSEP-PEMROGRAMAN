#include<stdio.h>

int main()
{
    while(printf("Ketik Karakter Apapun: \n")){
        char kar[0];
        gets(kar);
        if(kar == '\n')
            break;
        printf("\n%s\n", kar);
        exit(0);
    }

    return 0;
}
