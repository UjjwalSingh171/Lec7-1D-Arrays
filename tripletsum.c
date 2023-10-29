#include<stdio.h>       //Find total number of triplets whose sum add up to x
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    int count = 0;
    for(int i = 0 ; i<=9 ; i++)
    {
        for(int j = i+1 ; j<=9 ; j++)
        {
            for(int k = j+1 ; k<=9 ; k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    printf("{%d,%d,%d}",arr[i],arr[j],arr[k]);
                    count++;
                }
            }
        }
    }
    printf("\n%d",count);
}