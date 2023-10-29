#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[5]={1,2,6,4,7};
    int max = INT_MIN;
    for(int i = 0 ; i<=4 ; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}