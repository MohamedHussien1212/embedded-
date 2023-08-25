#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num[100],average,sum=0;
    int n,i;
    printf("enter number of student: ");
    scanf("%d",&n);
    while(n>100||n<0)
    {
        printf("error!!!! number should in Range (1:100): ");
        printf("enter number of student again: ");
        scanf("%d",&n);

    }
    for(i=0;i<n;i++){
        printf("enter number of degree %d: ",i+1);
        scanf("%f",&num[i]);
        sum=sum+num[i];
    }
    average=sum/n;
    printf("average of degree is:%f ",average);


    return 0;
}
