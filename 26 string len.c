/*You will be given a string 'str'. Your task is to find the length of 'str' without using strlen() function and print it.
Example

input: 
 language

output: 
 8

input: 
 program

output: 
 7
 */
#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);

	//Write your code here
	int length=strlen(str);
	printf("%d",length);
	return 0;
}