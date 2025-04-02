
#include<stdio.h>
void reversestring(char[],int);
int main()
{
  int size;
  printf("Enter the Size");
  scanf("%d",&size);
  char str[size];

  for (int i=0;i<size;i++)
  {
      scanf(" %c",&str[i]);
  }
 reversestring( str,size);

return 0;

}
void reversestring(char str[],int size)
{
 for(int i=size-1;i>=0;i--)
{
    printf("%c ",str[i]);

}
}
