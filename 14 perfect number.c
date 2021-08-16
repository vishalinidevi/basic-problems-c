/*You will be given a number 'n'. Your task is to check whether 'n' is a perfect number or not.
Example

input: 
 28

output: 
 Yes

input: 
 100

output: 
 No
 */
#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,rem;

    scanf("%d", &n);

    //Write your code here
    for(int i=1;i<n;i++)
    {
        rem=n%i;
        if(rem==0)
            sum+=i;
    }
    if(sum==n)
        printf("Yes");
    else
        printf("No");
    return 0;
}