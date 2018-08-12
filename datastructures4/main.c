#include <stdio.h>
#include <string.h>
int main()
{
int i,n,low,high,mid;
char a[50][50],name[20];
printf("B.Sandeep\n");
printf("15115029\n");
printf("\nenter the number of names to be added:\n");
scanf("%d",&n);
printf("enter the name in ascending order:\n");
for(i=0;i<=n-1;i++)
{
scanf("%s",&a[i]);
}
printf("\n");
printf("enter the name to be searched\n");
scanf("%s",&name);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if (strcmp(name,a[mid])==0)


{
printf("Name found at the position %d\n",mid+1);
exit(0);
}
else if(strcmp(name,a[mid])>0)
{
high=high;
low=mid+1;
}
else
{
low=low;
high=mid-1;
}
}
printf("name not found\n");
return 0;
}


