#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char str[100];
    printf("enter a string: ");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++);
    printf("\nlength of string is : %d",i);

    return 0;
}
