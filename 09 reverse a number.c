/*You will be given a number 'num'. Your task is to find the reverse of 'num'.
Example

input: 
 451

output: 
 154

input: 
 300

output: 
 3
 */
#include<stdio.h>

int main()
{
    int num,y,ans;
    scanf("%d", &num);

    //Write your code here
    while(num>0)
    {
        y=num%10;
        ans=ans*10+y;
        num/=10;
        
        
    }
    printf("%d",ans);
    
    
    
    return 0;
}