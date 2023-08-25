#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int arr[2][2];
    int arr2[2][2];
    int arr3[2][2];


    printf("enter element of arry1: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("enter element of %d %d: ",i,j);
            scanf("%d",&arr[i][j]);
        }

    }
    printf("enter element of arry2: ");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("enter element of arry2 %d %d: ",i,j);
            scanf("%d",&arr2[i][j]);

        }


    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            arr3[i][j]=arr[i][j]+arr2[i][j];
        }


    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }


    return 0;
}
