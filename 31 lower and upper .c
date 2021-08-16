/*You will be given a string 'str'. Your task is to convert all uppercase letters to lowercase and all lowercase letters to uppercase and print it.
Example

input: 
 HEllO

output: 
 heLLo

input: 
 DRIVINg

output: 
 drivinG
 */
#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);

	//Write your code here
	for(int i=0;i<strlen(str);i++)
	{
	    if(str[i]>=65&&str[i]<=90)
	        str[i]=str[i]+32;
        else if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
	}
	printf("%s",str);
	
	return 0;
}