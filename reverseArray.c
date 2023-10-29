#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5];
    for(int i = 0 ; i<=4 ; i++)
    {
         
        arr2[4-i]=arr1[i];
          
    }
    for(int k = 0 ; k<=4 ; k++)
    {
        printf("%d ",arr1[k]);
    }
    printf("\n");
    for(int k = 0 ; k<=4 ; k++)
    {
        printf("%d ",arr2[k]);
    }
}