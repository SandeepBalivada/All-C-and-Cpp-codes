#include<stdio.h>
#include<stdlib.h>
int i,j,k,a[3][3],choice,b[3][3];
int transpose(int a[][]);
int main()
{
    printf("Enter the 3x3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
          scanf("%d",&a[i][j]);
    printf("Enter 1 or 2 or 3 or 4 for rotations:\n");
    scanf("%d",&choice);
    if(choice == 2 || choice == 4 )
        display(a);
    else
        display(b);
    return 0;
}
