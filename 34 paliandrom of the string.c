/*You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.
Example

input: 
 abcde

output: 
 Not Palindrome

input: 
 radar

output: 
 Palindrome
 */
#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);
    int i,n,c=0;
	//Write your code here
	n=strlen(str);
	for(i=0;i<n/2;i++)
	{
	    if(str[i]==str[n-i-1])
	    c++;    
	}
	if(c==i)
	    printf("Palindrome");
	else
	    printf("Not Palindrome");
	return 0;
}