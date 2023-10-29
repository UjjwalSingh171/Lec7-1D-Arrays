//Check if the given element in present in Array or not
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,3};

    int x;
    printf("Enter x:");
    scanf("%d",&x);

    for(int i = 0 ; i<=4 ; i++)
    {
        if(x==arr[i])
        {
            printf("%d ",i);
        }
    }
}