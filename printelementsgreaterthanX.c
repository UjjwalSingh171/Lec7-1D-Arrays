#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,5,3,9};
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);
    for(int i = 0 ; i<=5 ; i++)
    {
        if(x<arr[i])
        {
            printf("%d\n",arr[i]);
        }
    }
}