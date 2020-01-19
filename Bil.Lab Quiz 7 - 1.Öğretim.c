#include <stdio.h>
#include <stdlib.h>

int fibonacci(int, int, int);
int asalSayi(int, int);

int main()
{
    int s;

    printf("Fibonacci eleman sayisi: ");
    scanf("%d",&s);

    printf("0 1");
    fibonacci(s-2,1,1);
    printf("\n");

    return 0;
}

int fibonacci(int x, int i, int j){

    if(x==0)
        return 0;

    printf(" %d",j);

    if(asalSayi(j,j/2))
        printf("(asal)");

    int temp=j;
    j=temp+i;
    i=temp;

    return fibonacci(x-1,i,j);
}

int asalSayi(int x, int i){

    if(x<2)
        return 0;

    if(i==1)
        return 1;

    if(x%i==0)
        return 0;

    return asalSayi(x,i-1);
}
