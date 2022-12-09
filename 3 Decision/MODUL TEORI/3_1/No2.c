#include<stdio.h>

main()
{
    char huruf, vok, vok1;

    printf("Input huruf:\n");
    scanf("%c", &huruf);
    vok = 'a', 'i', 'e', 'o', 'u';
    vok1 = 'A', 'E', 'I', 'O', 'U';

    if((huruf == vok) || (huruf == vok1))
        printf("Huruf Vokal");
    else
        printf("Huruf Konsonan");

    return 0;
}


