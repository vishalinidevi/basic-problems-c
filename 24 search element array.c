/*You will be given an integer array 'arr' and an integer 'key'. Your task is to search 'key' in 'arr' and print the search result.
Example

input: 
 3 10 20 30 20

output: 
 Key found

input: 
 4 2 4 5 7 6

output: 
 Key not found
 */
#include<stdio.h>

int main()
{
    int arr[10], n, i, key,flag=0;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    //Write your code here
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Key found");
    else
        printf("Key not found");

    return 0;
}