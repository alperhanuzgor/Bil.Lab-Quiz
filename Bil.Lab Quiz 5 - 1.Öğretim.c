#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,s2;

    printf("Satir sayisini girin: ");
    scanf("%d",&s1);
    printf("Sutun sayisini girin: ");
    scanf("%d",&s2);
    printf("\n");

    for(int i=0;i<s1;i++){

        for(int j=0;j<s2;j++){

            if((i+j)%2)
                printf("0");
            else
                printf("1");
        }

        printf("\n");
    }

    return 0;
}
