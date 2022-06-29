#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("input array is:");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    int key,count=0;
    printf("\nenter key:");
    scanf("%d",&key);
    int *a=&(arr[0]);
    int *b=&(arr[n-1]);
    while((*a)!=(*b))
    {
        if( ( *a + *b ) > key)
        b--;
        if((*a + *b )< key)
        a++;
        if(((*a + *b)==key) && (a!=b))
        {
        printf("%d + %d = %d(key)",*a,*b,key);
        count++;
        break;
        }
    }
    if(count==0)
    {
        printf("No such combination exits!!!");
    }
}
