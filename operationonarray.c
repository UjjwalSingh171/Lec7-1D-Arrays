#include<stdio.h>    //Multiply odd indexed elements by 2 and add 10 to the even elements
#include<limits.h>   //11,4,16,8,8
int main()
{
    int arr[5]={1,2,6,4,-2};
    for(int i = 0 ; i<=4 ; i++)
    {
        if(i%2==0)
        {
            arr[i] = arr[i]+10;
        }
        if(i%2!=0)
        {
            arr[i] = arr[i]*2;
        }
    }
    for(int i = 0 ; i<=4 ; i++)
    {
        printf(" {%d} , ",arr[i]);
    }
    return 0;
}