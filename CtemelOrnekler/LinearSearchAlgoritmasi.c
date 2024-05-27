#include <stdio.h>
#include <stdlib.h>



int bul (int *algoritma,int aranilanSayi,int uzunluk)
{

    int i;
    for ( i = 0; i < uzunluk ; i++)
    {
        if (aranilanSayi == algoritma[i])
        {
            return i;
        }
    }
    printf("Aranilan sayi dizi icersinde bulunamamistir.");
    exit(0);


}
int main()
{
    int algoritma[] = {7,49,58,100,150,10,15,1,0,17};
    int aranilanSayi = 150;

    int uzunluk = sizeof(algoritma)/sizeof(algoritma[0]);
    int sonuc = bul(&algoritma,aranilanSayi,uzunluk);
    printf("Aranilan sayi dizinin %d. indeksindedir.\n",sonuc);

    return 0;
}
