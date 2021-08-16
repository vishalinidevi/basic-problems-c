/*You will be given a number 'num'. Your task is to check whether 'num' is an amstrong number or not.
Example

input: 
 153

output: 
 Armstrong number

input: 
 321

output: 
 Not Armstrong number
 */
include<stdio.h>
int main()
{
    int num,y,sum=0;

    scanf("%d", &num);
    int temp=num;

    //Write your code here
    while(num>0)
    {
        y=num%10;
        sum=sum+y*y*y;
        num/=10;
    }
    if(temp==sum)
        printf("Armstrong number");
    else
        printf("Not Armstrong number");
    

    return 0;
}