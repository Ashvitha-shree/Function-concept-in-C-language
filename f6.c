#include<stdio.h>
void sum(int[],int);
int main()
{

int arr[5]={1,3,8,47,896};
int n=5;
sum(arr,n);
return 0;

}
void sum(int num[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=num[i];

    }
    printf("array sum %d",sum);
}
