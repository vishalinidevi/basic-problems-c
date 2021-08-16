/*You will be given two strings 'str1' and 'str2'. Your task is to check whether 'str1' and 'str2' are the same or not.
Example

input: 
 cake cake

output: 
 Yes

input: 
 god dog

output: 
 No
 */
#include<stdio.h>

int main()
{
    char str1[10], str2[10];
    scanf("%s%s", str1, str2);

    //Write your code here
    if(strcmp(str1,str2)==0)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}