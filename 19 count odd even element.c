/*You will be given an integer array 'arr'. Your task is to print the count of even numbers and odd numbers in 'arr'.
Example

input: 
 3 1 2 3

output: 
 Even Number Count = 1
Odd Number Count = 2

input: 
 4 1 5 3 7

output: 
 Even Number Count = 0
Odd Number Count = 0
*/
#include<stdio.h>

int main()
{
    int arr[10], size, i;
    scanf("%d", &size);
    int odd_count=0,even_count=0;
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    //Write your code here
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
            even_count++;
        else
            odd_count++;
    }
    printf("Even Number Count =%d\n",even_count);
    printf("Odd Number Count=%d",odd_count);
    
    return 0;
}