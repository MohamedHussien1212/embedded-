#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],temp;
    int i,j=0;
    printf("enter a string: ");
    gets(str);
    i=0;
    j=strlen(str)-1;
    while(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;

    }
    printf("\nreverse string is: %s ",str);
    return 0;
}
