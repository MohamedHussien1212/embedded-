#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,x,location;
    int arr[20];
    printf("enter no of element: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter element of %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter element of array \n");

    for(i=0; i<n; i++)
    {

        printf("%d\t",arr[i]);

    }
    printf("\nenter the element to be search: ");
    scanf("%d",&x);
    i=0;
    while(i<n &&x!=arr[i]){
            i++;

    }
    if(i<n){
        printf("\nnumber found at location %d",i+1);
    }
    else{
        printf("number not found");
    }



    return 0;
}
