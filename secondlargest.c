//Find the second largest element in Array
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[5]={1,-2,6,4,-7};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i = 0 ; i<=4 ; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    for(int j = 0 ; j<=4 ; j++)
    {
        if(arr[j]>smax && arr[j]<max)
        {
            smax = arr[j];
        }
    }
    printf("The Largest Element is %d\n",max);
    printf("The Second Largest Element is %d",smax);
    return 0;
}