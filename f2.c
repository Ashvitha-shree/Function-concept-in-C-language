#include<stdio.h>
void vote(int);
int main(){
 int age =18;
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
