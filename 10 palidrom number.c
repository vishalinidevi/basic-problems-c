/*You will be given a number 'num'. Your task is to check whether 'num' is a palindrome number or not.
Example

input: 
 121

output: 
 Palindrome

input: 
 345

output: 
 Not Palindrome
 */
#include<stdio.h>

int main()
{
    int num,y,ans=0;
    
    scanf("%d", &num);
    int temp=num;
    //Write your code here
    while(num>0)
    {
        y=num%10;
        ans=ans*10+y;
        num/=10;
    }
    if(temp==ans)
    {
        printf("Palindrome");
    }
    else
        printf("Not Palindrome");
    

    return 0;
}