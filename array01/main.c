#include <stdio.h>
#include <stdlib.h>
int findIndex(int a[], int n);
int i,a[40],j=0,n;
int main()
{

    printf("Enter the no. of array elements:\n");
    scanf("%d",&n);
    printf("Enter the %d array elements (0 0r 1 only):\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    findIndex(a,n);

}

int findIndex(int a[],int n)
{
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
           j = i;
           break;
        }
    }
    if ( j == 0)
    {
        return -1;
    }
    else{
    printf("0->1 transition occured at: ");
    printf("%d",j+1);
    return 0;
   }
}
