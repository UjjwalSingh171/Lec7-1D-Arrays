//Reverse the Array without using extra array
#include<stdio.h>

void swap( int arr[] , int i)
{
    int temp;
    temp = arr[i] ;
    arr[i] = arr[5-i] ;
    arr[5-i] = temp ;
}

int main()
{
    int arr[6]={0,1,2,3,4,5};
     
    for(int i = 0 ; i<=2 ; i++)
    {
        swap( arr, i );

    }

    for(int k = 0 ; k<=5 ; k++)
    {
        printf("%d ",arr[k]);
    }
     
}