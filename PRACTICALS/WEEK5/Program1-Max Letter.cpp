#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[20];
    char *s=a;
 
    scanf("%s",a);
    int arr[26]={0};
    printf("Input string:");
        while((*s) != '\0')
        {
        printf("%c",*s);
        s++;
        }
        s=a;
    while(*s != '\0')
    {
        if((*s)>=65 && (*s)<=90)
        {
            int index=(*s)-65;
            arr[index]++;
        }
        
        else if((*s)>=97 && (*s)<=122)
        {
            int index=(*s)-97;
            arr[index]++;
        }
        s++;
    }
      int max=arr[0];
      int in;
    for(int i=0;i<26;i++)
    {
      if(arr[i]>max)
      {
      max=arr[i];
      in=i;
      }
      if(i==25 && max==1)
      {
        printf("\nno max letter exists");
        break;
      }
          if(i==25)
        printf("\nmax is:%c",97+in);
    }
    
}
