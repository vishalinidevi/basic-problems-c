/*You will be given a number 'num'. Your task is to split num into separate digits.
Example

input: 
 12

output: 
 2 1

input: 
 123

output: 
 3 2 1
 */
#include<stdio.h>

int main()
{
    int num,y;
    scanf("%d", &num);

    //Write your code here
    while(num!=0)
    {
        y=num%10;
        num/=10;
        printf("%d ",y);
    }
    

    return 0;
}