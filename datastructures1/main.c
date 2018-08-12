#include<stdio.h>
int main()
{
 int i,k,n,a[30],p;
 printf("B.Sandeep");
 printf("\n15115029\n");
 printf("enter the size of the array\n");
 scanf("%d",&p);
 printf("\nenter the %d elements of the array\n",p);
 for(i=0;i<p;i++)
    scanf("%d",&a[i]);
 printf("\ngiven array of elements:\n");
for(i=0;i<p;i++)
 {
    printf(" %d\n",a[i]);
}
 printf("\nthen into the program:\n");
 printf("\nenter 1 to traversing of array");
 printf("\nenter 2 to insertion of element at k position");
 printf("\nenter 3 to deletion of element at k position\n");
 scanf("%d",&n);
 switch(n)
 {
 case 1:for(i=0;i<p;i++)
 {
  a[i]=1*a[i];
 printf("%d\n",a[i]);
}
break;


case 2:
    printf("\nenter position:\n");
    scanf("%d",&k);
  for(i=9;i>=k;i--)
  {
 a[i+1]=a[i];
  }
a[k]=11;
for(i=0;i<p+1;i++)
{
printf("%d\n",a[i]);
}
break;


case 3:printf("\nenter position:\n");
    scanf("%d",&k);
for(i=k;i<p-1;i++)
{
a[i]=a[i+1];
}
for(i=0;i<=8;i++)
{
printf("%d\n",a[i]);
}
break;


default:printf("something else");
}
return 0;
}
