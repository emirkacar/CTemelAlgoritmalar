#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kelime[100];
    int i,j;
    int sayac[256] = {0};



    printf("Kelime giriniz: ");
    gets(kelime);
    int uzunluk=strlen(kelime);

    for (i = 0; i< uzunluk ; i++)
    {
        for (j = 0; j< uzunluk; j++)
        {
            if(kelime[i] == kelime[j])
            {
                sayac[i]++;
            }
        }
    }

    for ( i=0 ; i<uzunluk; i++ )
    {
        printf("kelime[%d] %d kere tekrar etmistir\n",i,sayac[i]);
    }

    return 0;
}
