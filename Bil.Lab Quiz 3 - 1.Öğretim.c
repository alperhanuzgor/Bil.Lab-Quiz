#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    char islem;

    printf("Enter [Sayi 1] Islem [+ - * /] [Sayi 2]\n");
    scanf("%f %c %f",&x,&islem,&y);

    switch(islem)
    {
        case '+':
            printf("%f + %f = %f\n",x,y,x+y);
            break;

        case '-':
            printf("%f - %f = %f\n",x,y,x-y);
            break;

        case '*':
            printf("%f * %f = %f\n",x,y,x*y);
            break;

        case '/':
            if(y==0){
                printf("Bolme isleminde bir sayinin sifira bolumu tanimsizdir!\n");
                break;
            }
            printf("%f / %f = %f\n",x,y,x/y);
            break;
    }

    return 0;
}
