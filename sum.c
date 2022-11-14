#include<stdio.h>

int main(){
  int x,y,i,sum=0;

  printf("enter num1: ");
  scanf(" %d",&x);
  printf("enter num2: ");
  scanf(" %d",&y);
  if(x<y){
  
  for(i=x;i<=y;i++){
    printf("%d\t",i);
    sum=sum+i;
  }
  printf("\n");
  printf("sum =  %d\n",sum);
  }
  else if (x>y)
  {
     for(i=x;i>=y;i--){
    printf("%d\t",i);
    sum=sum+i;
  }
  printf("\n");
  printf("sum =  %d\n",sum);
    
  }
  else if(x==y){
    printf("%d\t%d\n ",x,y);
    sum =x+y;
    printf(" sum= %d\n",sum);
    
  }
  
    return 0;
}