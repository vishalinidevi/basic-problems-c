/*You will be given a number 'num'. Your task is to check whether 'num' is a prime number or not.
Example

input: 
 5

output: 
 Prime number

input: 
 4

output: 
 Not Prime number
 */
#include<stdio.h>
int main()
{
    int num;

    scanf("%d", &num);

    //Write your code here
    int flag = 0;

    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Prime number");
    else
        printf("Not Prime number");

    return 0;
}