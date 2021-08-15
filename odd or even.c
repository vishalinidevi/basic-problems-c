/*You will be given a number 'num'. Your task is to find whether 'num' is a odd or even number
Example

input: 
 4

output: 
 Even

input: 
 1

output: 
 Odd
 */
#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    //Write your code here
    if(num%2==0)
    {
        printf("Even");
        
    }
    else
        printf("Odd");

    return 0;
}