/*You will be given an integer array 'arr'. Your task is to print the largest element in 'arr'.
Example

input: 
 5 8 10 3 2 6

output: 
 Max = 10

input: 
 4 0 0 0 0

output: 
 Max = 0
 */
#include<stdio.h>

int main()
{
    int arr[10], n, i;
    scanf("%d", &n);
    int current_max=0;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    current_max=arr[0];
    //Write your code here
    for(i=1;i<n;i++)
    {
        if(current_max<arr[i])
            current_max=arr[i];
    }
    printf("Max=%d",current_max);
    return 0;
}