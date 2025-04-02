/*Factorial Calculation (Loop and Return Value)
o Problem: Write a function int factorial(int n) that calculates the factorial of a nonnegative integer n using a loop. The function should return 1 if n is 0 or 1, and
otherwise calculate the factorial iteratively. In the main function, prompt the user to
enter a number and display the factorial of that number*/

#include<stdio.h>
void factorial(int);
int main()
{
int num ;
 printf("Enter a number: ");
 scanf("%d", &num);
 if(num>=0)
 factorial(num);

return 0;

}
void factorial(int num)
{
 if(num!=0 && num!=1){
 int fact=1;
 for(int i = 1; i <= num; i++)
 fact *= i;
 printf("Factorial: %d\n", fact);
}
else
    printf("factorial=%d",num);


}
