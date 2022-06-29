//GIVEN AN ALREADY SORTED ARRAY OF POSITIVE INTEGERS,DESIGN AN ALGORITHM AND IMPLEMENT IT USING A PROGRAM TO FIND WHETHER A GIVEN KEY ELEMENT IS PRESENT OR NOT.ALSO FIND OUT THE TOTAL NUMBER OF COMPARISONS.

#include <stdio.h>
#define MAX 50
int main()
{
    int n,arr[MAX],mid,key;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key:");
    scanf("%d",&key);
    int i=0,j=n-1,flag=0;
    mid =(i+j)/2;
       if(arr[mid]==key)
       {
           flag++;
           printf("element found at index %d and comparisons are %d",mid,flag);
       }
       else if(arr[mid]>key)
       {
           for(i=0;i<=mid;i++)
           {
               flag++;
               if(arr[i]==key)
               {
                   printf("element found at index %d and comparisons are %d",i,flag);
                   break;
               }
                else if(i==mid)
               {
                  printf("element not found in %d comparisons",flag); 
                  break;
               }
           }
           
       }
       else if(arr[mid]<key)
       {
           for(i=mid;i<=j;i++)
           {
               flag++;
               if(arr[i]==key)
               {
                   printf("element found at index %d and comparisons are %d",i,flag);
                   break;
               }
               else if(i==j)
               {
                  printf("element not found in %d comparisons",flag); 
                  break;
               }
           }
       }
    return 0;
}
