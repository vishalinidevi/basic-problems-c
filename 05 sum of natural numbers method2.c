/*You will be given a number 'N'. Your task is to calculate the sum of first N natural numbers from 1 to N without using for loop - O(1) complexity.
Example

input: 
 4

output: 
 10

input: 
 10

output: 
 55
 */
#include<stdio.h>

int main()
{
    int N,sum;
    scanf("%d", &N);

    //Write your code here
    sum=N*(N+1)/2;
    printf("%d",sum);

    return 0;
}