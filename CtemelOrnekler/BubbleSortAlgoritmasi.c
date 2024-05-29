#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[]= {1,2,6,150,26,48,40,12,35};
    int i,j,gecici;
    int uzunluk = sizeof(dizi)/sizeof(dizi[0]);
    for (i = 0; i < uzunluk - 1;i++)
    {
        for (j = 0; j<uzunluk-1-i;j++)
        {
            if ( dizi[j]>dizi[j+1])
            {
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }

    for (i = 0; i < uzunluk ;i++)
    {
        printf("%d ",dizi[i]);
    }

    return 0;
}
