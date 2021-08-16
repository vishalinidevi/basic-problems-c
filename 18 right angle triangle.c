/*Your task here is to print half pyramid of stars.
Example

input: 
 3

output: 
*
**
***

input: 
 4

output: 
*
**
***
*****/
#include<stdio.h>


int main()
{
  	int n,i,j;

  	scanf("%d", &n);

  	//Write your code here
  	for(i=1;i<=n;i++)
  	{
  	    for(j=1;j<=i;j++)
  	    {
  	        printf("*");
  	    }
  	    printf("\n");
  	}
  	

  	return 0;
}