/*You will be given a positive integer 'n'. Your task is to print the first 'n' terms of the fibonacci series.
Example

input: 
 4

output: 
 0 1 1 2

input: 
 5

output: 
 0 1 1 2 3
 */
#include<stdio.h>
int main()
{
    int n;
    int a=0,b=1,c;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        if(i<=1)
            c=i;
        else
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d ",c);
    }
    return 0;
}