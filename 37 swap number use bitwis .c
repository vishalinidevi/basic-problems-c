/*You will be given two numbers 'num1' and 'num2'. Your task is to swap 'num1' and 'num2' using bitwise operators.
Example

input: 
 3 4

output: 
 4 3

input: 
 10 1

output: 
 1 10
 */
#include<stdio.h>

int main()
{
	int a, b;

	scanf("%d%d", &a, &b);

	//Write your code here
	printf("%d %d", (a^b)^a,(a^b)^b);
	
	return 0;
}