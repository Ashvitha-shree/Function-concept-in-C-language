
/*5. Calculate Power of a Number (Loop for Exponentiation)
o Problem: Write a function int power(int base, int exponent) that calculates the
power of a number using a loop. The function should return base raised to the
power of exponent, calculated iteratively. For example, power(2, 3) should return 8.
In the main function, get base and exponent from the user, call power, and display
the result*/
#include<stdio.h>
void power(int,int);
int main()
{
  int base,exponent;
  printf("Enter the base");
  scanf("%d",&base);
  printf("Enter the exponent ");
  scanf("%d",&exponent);
  power(base,exponent);
  return 0;

}
void power(int base,int exponent)
{
   int result=1;
  for (int i=0;i<exponent;i++)
  {
      result*=base;
  }
  printf("%d power %d is %d",base,exponent,result);
}
