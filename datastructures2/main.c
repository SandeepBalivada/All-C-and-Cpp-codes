#include<stdio.h>
int main()
{
int a[5],i,search;
printf("B.Sandeep");
printf("\n15115029");
printf("\nenter the elements of the array\n");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to be searched\n");
scanf("%d",&search);
for(i=0;i<=4;i++)
{
if(a[i]==search)
{
printf("yes\n");
}
else
{
printf("no\n");
}
}
return 0;
}


