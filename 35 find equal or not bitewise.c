/*You will be given two numbers 'num1' and 'num2'. Your task is to check whether 'num1' and 'num2' are equal or not using bitwise operators.
Example

input: 
 4 4

output: 
 Equal

input: 
 0 0

output: 
 Equal
 */
#include<stdio.h>

int main()
{
	int num1, num2;

	scanf("%d%d", &num1,&num2);

	//Write your code here
	if((num1^num2)==0)
	    printf("Equal");
    else 
        printf("Unequal");


	return 0;
}