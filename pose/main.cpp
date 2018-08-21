#include <stdio.h>

using namespace std;
int i,j,k,a[3][3],choice;
int transpose(int a[3][3]);
int display(int a[3][3]);

int main()
{
    printf("Enter the 3x3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
          scanf("%d",&a[i][j]);
    printf("Enter 1 or 2 or 3 or 4 for rotations:\n");
    scanf("%d",&choice);
    if(choice == 1 || choice == 3 )
        transpose(a);
    else
        display(a);
    return 0;
}



int transpose(int a[3][3])
{
    int b[3][3];
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            b[i][j] = a[j][i];
    display(b);
     return 0;
}

int display(int a[3][3])
{
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

