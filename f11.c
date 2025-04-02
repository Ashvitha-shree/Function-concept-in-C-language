/*4. Find Maximum in Array (Array and Loops)
o Problem: Write a function int findMax(int arr[], int size) that takes an array of
integers arr and its size size as arguments, and returns the maximum element in the
array. Use a loop to find the largest element. In the main function, initialize an array,
call findMax, and display the maximum value*/

#include<stdio.h>
void findmax(int[],int);
int main()
{
  int size;
  printf("Enter the Size");
  scanf("%d",&size);
  int arr[size];

  for (int i=0;i<size;i++)
  {
      scanf("%d",&arr[i]);
  }
 findmax( arr,size);

return 0;

}
void findmax(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }}
       printf("Maximum = %d",max);


}
