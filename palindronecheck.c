#include<stdio.h>
int main()
{
    int arr[5]={0,1,2,1,0};
    int count = 0;
    for(int i = 0 ; i<=4 ; i++)
    {
        if(arr[i]!=arr[4-i])
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("palindrone");
    }
    else
    {
        printf("Not palindrone");
    }
}