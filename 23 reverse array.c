/*You will be given an integer array 'arr'. Your task is to reverse the array elements and print it.
Example

input: 
 4 2 1 3 4

output: 
 4 3 1 2

input: 
 5 10 30 20 50 60

output: 
 60 50 20 30 10
 */
#include<stdio.h>

int main()
{
	int arr[10], n, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //Write your code here
    for(i=n-1;i>=0;i--)
        printf("%d ",arr[i]);

    return 0;
}