
#include<stdio.h>
void fibo(int);
int main(){
   int n;

  printf("enter the number");
  scanf("%d",&n);
  fibo(n);


 return 0;
}
void fibo(int x)
{
 int t1 = 0, t2 = 1, nextTerm;;
 int i=1;
  while(i<=x)
    {
        i+=1;

 printf("%d ", t1);
 nextTerm = t1 + t2;
 t1 = t2;
 t2 = nextTerm;
    }


}


