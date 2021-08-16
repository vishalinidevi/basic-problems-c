/*You will be given a number 'num'. Your task is to find the sum of digits of 'num'.
Example

input: 
 12

output: 
 3

input: 
 345

output: 
 12
 */
#include<stdio.h>

int main()
{
    int num,y,sum=0;
    scanf("%d", &num);

    //Write your code here
    while(num!=0)
    {
        y=num%10;
        num/=10;
        sum+=y;
    }
    printf("%d",sum);
    

    return 0;
}