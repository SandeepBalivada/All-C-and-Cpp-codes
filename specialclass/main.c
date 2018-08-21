#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,first,last,n,a[100],middle,b,flag=0;
   printf(" enter the number of integers to be used:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   printf("entered elements are:\n");
   for(i=0;i<n;i++)
   {
    printf("%d\n",a[i]);
   }
   first=a[0];
   last=a[n];
   middle= (first+last)/2;
   printf("enter the element to be searched");
   scanf("%d",&b);
   while(first<last)
   {
    if(middle==b)
    {
     printf("the element is found at position %d",middle+1);
     flag++;
    }
    else if(middle>b)
     {
        last=middle-1;
        flag++;
     }
     else
     {
       first=middle+1;
       flag++;
     }
     middle= (first+last)/2;
   }
   if(flag==0)
    printf("not found");
    return 0;
}
