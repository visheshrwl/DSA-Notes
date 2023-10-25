#include <stdio.h>
int main()
{
    int len,i=0;
    printf("Input the size of array : ");
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++)
    {
        printf("Input the elements : ");
        scanf("%d",&arr[i]);
    }
    int temp=arr[len-1];
    while (len>0)
    {
        for(i=len-1;i>0;i--)
        {
        arr[i]=arr[i-1];
        }
        for(int i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
    len--;
    }
    arr[0]=temp;
    
    return 0;
}