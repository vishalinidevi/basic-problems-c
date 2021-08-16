/*You will be given a string 'str'. Your task is to reverse 'str' and print it.
Example

input: 
 flipkart

output: 
 trakpilf

input: 
 backdrop

output: 
 dordkcab
 */
#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);

	//Write your code here
	int length=strlen(str);
	for(int i=length-1;i>=0;i--)
	{
	    printf("%c",str[i]);
	}

	return 0;
}