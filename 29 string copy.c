/*You will be given a string 'str'. Your task is to copy 'str' without using strcpy() function.
Example

input: 
 input

output: 
 Copied string = input

input: 
 animal

output: 
 Copied string = animal
 */
#include<stdio.h>

int main()
{
	char str[10], copy_str[10];
	scanf("%s", str);

	//Write your code here
	
    strcpy(copy_str,str);
	printf("Copied string = %s",copy_str);
	return 0;
}