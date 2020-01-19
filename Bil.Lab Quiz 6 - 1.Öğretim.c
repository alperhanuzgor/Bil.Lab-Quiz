#include <stdio.h>
#include <stdlib.h>

int SeriHesapla(int a,int b){

    int i,j;
    int c=0;
    int sonuc1;
    int sonuc2=0;

    printf("Serinin Terimleri: ");

    for(i=1;i<=b;i++){

        sonuc1=1;

        for(j=1;j<=c;j++)
            sonuc1*=j;

        sonuc2+=sonuc1;

        printf("%d + ",sonuc1);

        c+=a;
    }

    printf("\n");

    return sonuc2;
}

int main()
{
    int a,b;

    printf("a: ");
    scanf("%d",&a);

    printf("b: ");
    scanf("%d",&b);

    printf("ToplamSonuc: %d\n",SeriHesapla(a,b));

    return 0;
}
