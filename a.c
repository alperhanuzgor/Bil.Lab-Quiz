#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fiyat;

    printf("Urun fiyatini giriniz (TL): ");
    scanf("%f",&fiyat);

    if(fiyat>0&&fiyat<100)
        printf("Urunun indirimli satis fiyati = %f\n",fiyat-fiyat*10/100);
    else if(fiyat>=100&&fiyat<500)
        printf("Urunun indirimli satis fiyati = %f\n",fiyat-fiyat*15/100);
    else if(fiyat>=500)
        printf("Urunun indirimli satis fiyati = %f\n",fiyat-fiyat*25/100);

    return 0;
}
