#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    int y,b;

    printf("Satir sayisini girin: ");
    scanf("%d",&s);
    printf("\n");

    y=1;
    b=s/2;

    for(int i=0;i<s;i++){

        for(int j=0;j<b;j++)
            printf(" ");

        for(int j=0;j<y;j++)
            printf("*");

        if(i<s/2){
            y+=2;
            b--;
        }else{
            y-=2;
            b++;
        }

        printf("\n");
    }

    return 0;
}
