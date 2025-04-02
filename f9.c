/*Check Prime Number (Loop and Conditionals)
o Problem: Write a function int isPrime(int n) that checks if a given integer n is a prime
number. The function should return 1 if n is prime and 0 if it is not. A number is
considered prime if it is greater than 1 and has no divisors other than 1 and itself. In
the main function, get an integer from the user and display whether it is prime.
*/


#include<stdio.h>
void prime(int);
int main()
{
int num ;
 printf("Enter a number: ");
 scanf("%d", &num);
 if(num>=0)
 prime(num);

return 0;

}
void prime(int num)
{
 int c=0;
 for(int i = 1; i <= num; i++)
 {
     if(num%i==0)
        c+=1;

 }
 if(c>2)
   printf("%d is not a prime",num);

else
    printf("%d is prime",num);
}



