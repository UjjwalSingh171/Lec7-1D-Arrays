//Rotate the given Array by ‘k’ steps
#include<stdio.h>

void swap3(int arr[],int i)
{
    int temp;
    temp = arr[i] ;
    arr[i] = arr[4-i] ;
    arr[4-i] = temp ;
}

void swap2(int arr[],int i,int x)
{
    int temp;
    temp = arr[5-x] ;
    arr[5-x] = arr[4] ;
    arr[4] = temp ;
}

void swap1(int arr[],int i,int x)
{
    int temp;
    temp = arr[i] ;
    arr[i] = arr[4-x-i] ;
    arr[4-x-i] = temp ;
}

int main()
{
    int arr[5]={0,1,2,3,4};
    
    int x;
    printf("Enter x:");
    scanf("%d",&x);

    for(int i = 0 ; i<=(4-x)/2 ; i++)
    {
        swap1(arr,i,x);
    }

    for(int i = 5-x ; i<=4 ; i++)
    {
        swap2(arr,i,x);
    }

    for(int i = 0 ; i<=2 ; i++)
    {
        swap3(arr,i);
    }

    for(int i = 0 ; i<=4 ; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}