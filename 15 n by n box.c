/*You will be given a positive number 'N'. Your task is to print an N x N box of stars.
Example

input: 
 3

output: 
***
***
***

input: 
 4

output: 
****
****
****
****
*/
#include<stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    //Write your code here
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}