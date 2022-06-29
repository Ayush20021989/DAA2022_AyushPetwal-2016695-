//GIVEN A SORTED ARRAY OF POSITIVE INTEGERS CONTAINING 'q' DUPLICATE ELEMENTS.DESIGN AN ALGORITHM AND IMPLEMENT IT USING A PROGRAM TO FIND WHETHER A GIVEN KEY IS PRESENT IN THE ARRAY OR NOT.IF IT IS PRESENT, FIND TOTAL NO. OF COPIES OF THE GIVEN KEY
#include<stdio.h>
#define MAX 50
int main()
{
    int arr[MAX],n,key,flag=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the key:");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag++;
        }
    }
    if(flag==0)
    {
        printf("Not Present");
        printf("\n%d",flag-1);
    }
    else
    {
        printf("Present");
        printf("\n%d->%d",key,flag);
    }
}
