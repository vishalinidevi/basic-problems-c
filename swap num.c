/*You will be given two numbers stored in variables 'a' and 'b'. Your task is to swap the values present and print them.
Example

input: 
 4 5

output: 
 5 4

input: 
 -3 -2

output: 
 -2 -3
 */
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    //Write your code here
	printf("%d %d\n", (a^b)^a,(a^b)^ b);
    return 0;
}