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
    printf("\nenter element to be inserted: ");
    scanf("%d",&x);
    printf("enter the location: ");
    scanf("%d",&location);
    for(i=n;i>=location;i--){
            arr[i]=arr[i-1];

    }
    n++;
    arr[location-1]=x;
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }



    return 0;
}
