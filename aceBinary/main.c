#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int a[30],n,l=1;r=n,mid,pt;
    printf("enter the length of the string of numbers:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("now going to the actual solution:\n");
    while(l<=r)
    {
     mid= (l+r)/2;
     if(a[mid]==1)
     {
        r= mid-1;
        pt= mid;
     }
     else
     {
      l=mid+1;
     }
    }
    printf("The position where we get the first 1 is: a[%d]",pt);
    return 0;
}
