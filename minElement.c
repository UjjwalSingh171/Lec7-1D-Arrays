#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[5]={1,2,6,4,-2};
    int min = INT_MAX;
    for(int i = 0 ; i<=4 ; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}