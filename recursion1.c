#include<stdio.h>
void hello(int);
int main()
{
 hello(10);
 return 0;


}
void hello(int n){
    if(n>0){
    printf("%d ",n);

 hello(n-2);}
}

