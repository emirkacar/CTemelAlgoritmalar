#include <stdio.h>
#include <stdlib.h>

int binary(int dizi[],int n,int arananSayi)
{
    int sol = 0;
    int sag = n - 1;
    while(sol<=sag)
    {
        int orta = sol + (sag-sol)/2;
        if(dizi[orta] == arananSayi)
        {
            return orta;
        }
        else if ( dizi[orta] < arananSayi)
        {
            sol = orta +1;
        }
        else
        {
            sag = orta - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Kac adet sayi girilecek : ");
    scanf("%d",&n);
    int dizi[n];
    int i = 0;
    int j;
    printf("Dizi elemanlari : \n");
    while(1)
    {
        scanf("%d",&dizi[i]);
        i++;
        if(i == n)
        {
            break;
        }
    }

    for ( i =0;i<n;i++)
    {
        printf("%d ",dizi[i]);
    }
    printf("\n");
    for ( i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(dizi[j] > dizi[j+1])
            {
                int gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;
            }
        }
    }
    printf("Kucukten buyuge dogru siralanmis hali\n");
    for ( i =0;i<n;i++)
    {
        printf("%d ",dizi[i]);
    }
    printf("\n\n");
    int arananSayi;
    printf("Aranan sayiyi giriniz: ");
    scanf("%d",&arananSayi);
    int sonuc = binary(dizi,n,arananSayi);
    if(sonuc == -1)
    {
        printf("Aranan sayi dizide bulunamadi.");
    }
    else
    {
        printf("Aranan sayi dizinin %d. indisindedir.",sonuc);
    }

    return 0;
}
