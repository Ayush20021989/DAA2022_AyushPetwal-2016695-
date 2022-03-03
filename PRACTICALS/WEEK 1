//GIVEN AN ARRAY OF NON-NEGATIVE INTEGERS,DESIGN A LINEAR ALOGORITHM AND IMPLEMENT IT USING A PROGRAM TO FIND WHETHER A GIVEN KEY ELEMENT IS PRESENT O NOT.ALSO FIND OUT THE TOTAL NUMBER OF COMPARISONS.

#include<stdio.h>
#define MAX 50
int main()
{
    int arr[MAX],flag=0,key,n;
    printf("Enter the number of elements you want to enter:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the key:");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        flag++;
        if(arr[i]==key)
        {
            printf("The Key is Present at index %d and the  key element is %d\n",i,arr[i]);
            printf("Total number of comparisons are %d",flag);
            break;
        }
        if(i==n-1)
        {
            printf("Key not found and total comparisons were %d",flag);
        }
    }
    return 0;
}
