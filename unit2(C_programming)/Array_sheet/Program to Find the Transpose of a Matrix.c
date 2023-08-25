/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,r,c;
    int arr[100][100];
    int arr2[100][100];

    printf("enter row of array: ");
    scanf("%d",&r);
    printf("enter coulme of array: ");
    scanf("%d",&c);
    for(i=0; i<r; i++)

        for(j=0; j<c; j++)
        {
            printf("element of %d %d: ",i,j);
            scanf(" %d",&arr[i][j]);
        }


    for(i=0; i<r; i++)

        for(j=0; j<c; j++)
        {

            printf("%d",arr[i][j]);
            if(j==c-1);
                printf("\n");


        }



    for(i=0; i<r; i++)

        for(j=0; j<c; j++)
        {

            arr2[j][i]=arr[i][j];
        }


    printf("transpose of array is:\n");
    for(i=0; i<r; i++)

        for(j=0; j<c; j++)
        {

            printf("%d",arr2[i][j]);
            if(j==r-1);
                printf("\n");


        }




    return 0;
}*/
#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  // computing the transpose
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}
