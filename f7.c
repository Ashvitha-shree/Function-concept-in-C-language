
#include<stdio.h>
void sum(int[],int);
void avg(int,int);
int main()
{

int arr[5]={10,20,30,40,50};
int n=5;
sum(arr,n);

return 0;

}

void  sum(int num[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=num[i];

    }
    printf("array sum %d",sum);
    avg(sum,size);
    }
void  avg(int sum,int size){
    //float avg=(float)sum/size;
    printf("average %.2f", (float)sum/size);
}
