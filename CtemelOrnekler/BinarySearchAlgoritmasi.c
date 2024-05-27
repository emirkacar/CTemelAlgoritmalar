#include <stdio.h>
#include <stdlib.h>


int binary ( int dizi[],int n,int arananSayi)
{
    int sol = 0;
    int sag= n-1;
    int i;


    while(sol <= sag)
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
            sag = orta -1;
        }
    }
    return -1;
}



int main()
{
  int dizi[] = {1,2,3,4,5,6,7};
  int arananSayi = 7;
  int n = sizeof(dizi)/sizeof(dizi[0]);

  int sonuc = binary(dizi,n,arananSayi);
  if(sonuc == -1)
  {
      printf("Aranan sayi bulunamadi.");
  }
  else
  {
      printf("Aranan sayi %d.indekstedir.",sonuc);
  }



    return 0;
}
