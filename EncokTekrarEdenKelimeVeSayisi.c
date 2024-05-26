#include <stdio.h>
#include <stdlib.h>

//Kelimedeki en cok tekrar eden kelimeyi bulan algoritma.
int main()
{
    char kelime[100];
    int i,j;

    printf("Kelimeyi giriniz: ");
    gets(kelime);

    int uzunluk = strlen(kelime);
    int frekans[256] = {0};
    int max = 0;
    char enCokTekrarEdenKarakter = '\0';

    for ( i = 0; i<uzunluk; i++)
    {
        frekans[kelime[i]]++;
        if(max < frekans[kelime[i]] )
        {
            max = frekans[kelime[i]];
            enCokTekrarEdenKarakter = kelime[i];
        }
    }
    printf("En cok tekrar eden %c %d kere tekrar etmistir.",enCokTekrarEdenKarakter,max);









    return 0;
}
