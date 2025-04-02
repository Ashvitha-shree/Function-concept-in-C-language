
#include<stdio.h>
void sum(int , int);
int main(){
 int a,b ;

  printf("enter the a");
  scanf("%d",&a);
  printf("enter the b");
  scanf("%d",&b);

  sum(a,b);

 return 0;
}
void sum(int x,int y)
{
 int total=x+y;
  printf("total %d",total);
}
