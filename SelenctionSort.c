#include <stdio.h>
#include <stdlib.h>

int main()
{

     int dizi[] = {8,5,12,3,0,-5,6,1009,-1400,100,43,45};
     int i,j,gecici;
     int n = sizeof(dizi)/sizeof(dizi[0]);


     for (i=0;i<n-1;i++)
     {
         int minimumindeks = i;

         for (j=i+1;j<n;j++)
         {
             if(dizi[j] < dizi[minimumindeks])
             {
                 minimumindeks = j;
             }
         }
         gecici = dizi[i];
         dizi[i]=dizi[minimumindeks];
         dizi[minimumindeks]=gecici;
     }

     for (i=0;i<n;i++)
     {
         printf("%d ",dizi[i]);

     }

    return 0;
}
