
#include<stdio.h>
int fibo(int);
int main(){
  int n;
  scanf("%d",&n);

  printf(" %d",fibo(n));
  return 0;
}
int fibo(int n)
{

    if(n==0||n==1)
        return n;

    return fibo(n-2)+fibo(n-1);
    }
