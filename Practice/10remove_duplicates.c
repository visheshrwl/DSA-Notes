#include <stdio.h>

int main()
{
    int arr[100], i, j,k,n,c=0;
    printf("Enter the number of elements in array:");
    scanf("%d", &n);
    printf("Enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }  
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                n--;
                for(k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                j--;
                c=1;
            }
        }
    }  
    if(c==1){
       printf("\nUpdated array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    } 
    }
    else{
        printf("\nThere are no duplicates in array");
    }
    return 0;
}