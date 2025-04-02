
#include<stdio.h>
void vote(int);
int main(){
 int age ;
  printf("enter the age");
  scanf("%d",&age);
  vote(age/*argument*/);
 return 0;
}
void vote(int a/*parameter*/) //void vote(int age)
{
 if (a>=18)//if (age>=18)
    printf("eligible");
 else
   printf("not eligible");
}
