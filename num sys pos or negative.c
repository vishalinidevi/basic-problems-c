/*You will be given a number 'num'. Your task is to find whether 'num' is a positive number, negative number or zero
Example

input:
 0

output:
 Neither positive nor negative

input:
 -3

output:
 Negative
*/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    //Write your code here
    if(num==0)
        printf(" Neither positive nor negative");
    else if(num<0)
        printf("Negative");
    else
        printf("Positive");



    return 0;
}
