/*You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.
Example

input: 
 5 8 10 3 2 6

output: 
 Max = 10
Min = 2

input: 
 6 100 56 74 2 99 44

output: 
 Max = 100
Min = 2
*/
#include<stdio.h>

int main()
{
    int arr[10], n, i;
    scanf("%d", &n);
    int large,small;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //Write your code here
    large=small=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>large)
            large=arr[i];
        if(arr[i]<small)
            small=arr[i];
    }
    printf("Max=%d\n",large);
    printf("Min=%d",small);
    return 0;
}