/*You will be given two positive integers 'num' and 'n' . Your task is to enable nth bit of 'num' using bitwise operators.
Example

input: 
 0 7

output: 
 64

input: 
 4 1

output: 
 5
 */
#include<stdio.h>

int main()
{
	int num, n;

	scanf("%d%d", &num,&n);

	//Write your code here
	int result= num|(1<<n-1);
    printf("%d",result);
	
	return 0;
}