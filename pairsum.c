#include<stdio.h>       //Find total number of pairs whose sum add up to x
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    int count = 0;
    for(int i = 0 ; i<=9 ; i++)
    {
        for(int j = 1 ; j<=9 ; j++)
        {
            if(arr[i]+arr[j]==x)
            {
                printf("{%d,%d}",arr[i],arr[j]);
                count++;
            }
        }
    }
    printf("\n%d",count);
}