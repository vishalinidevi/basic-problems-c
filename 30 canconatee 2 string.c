/*You will be given two strings 'str1' and 'str2'. Your task is to concatenate 'str1' and 'str2' without using strcat() function.
Example

input: 
 test case

output: 
 testcase

input: 
 program mable

output: 
 programmable
 */
#include<stdio.h>

int main()
{
    char str1[10], str2[10], str3[20];
    
    scanf("%s%s", str1, str2);
    
    //Write your code here
    strcat(str1,str2);
    printf("%s",str1);
    
    
    return 0;
}
    