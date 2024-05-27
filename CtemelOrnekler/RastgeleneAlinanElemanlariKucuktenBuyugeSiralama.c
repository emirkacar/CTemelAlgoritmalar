#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Kac elemanli bir dizi olusturacaksiniz? :");
   scanf("%d",&n);
   int dizi[n];
   int i,j,gecici;

   for (i=0;i<n;i++)
   {
       scanf("%d",&dizi[i]);
   }

   for (i=0;i<n;i++)
   {
       for (j=0;j<n-1-i;j++)
       {
           if(dizi[j] > dizi[j+1])
           {
               gecici=dizi[j];
               dizi[j]=dizi[j+1];
               dizi[j+1]=gecici;
           }
       }
   }

   printf("Dizinin kucukten buyuge dogru siralanmis hali: \n");

   for (i=0;i<n;i++)
   {
       printf("%d\t",dizi[i]);
   }

    return 0;
}
