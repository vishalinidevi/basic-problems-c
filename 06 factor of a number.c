/*You will be given two numbers 'N' and 'X'. Your task is to check whether 'X' is a factor of 'N'.
Example

input: 
 10 2

output: 
 Yes

input: 
 10 3

output: 
 No
 */
#include<stdio.h>

int main()
{
    int N,X;
    scanf("%d%d", &N, &X);

    //Write your code here
    if(N%X == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}