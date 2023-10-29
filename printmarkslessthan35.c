#include<stdio.h>
int main()
{
    int arr[5]={90,67,33,41,99};
    for(int i = 0 ; i<=4 ; i++)
    {
        if(arr[i]<=35)
        {
            printf("Element No. %d",i);
        }
    }
    return 0;
}