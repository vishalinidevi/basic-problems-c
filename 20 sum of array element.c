/*You will be given an integer array 'arr'. Your task is to print the sum of elements in 'arr'.
Example

input: 
 5 4 6 2 1 3

output: 
 16

input: 
 4 10 20 30 40

output: 
 100
*/
#include<stdio.h>

int main()
{
    int arr[10], n, i;
    scanf("%d", &n);
    int sum=0;
    for(i = 0; i < n ; i++)
        scanf("%d", &arr[i]);

    //Write your code here
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
  
    return 0;
}