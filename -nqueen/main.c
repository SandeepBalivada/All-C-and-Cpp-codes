#include <stdio.h>
#include <stdlib.h>
int col,row;
int a[4][4];
flag=85;
int i,j;
int nqueen(int a[4][4],int col)
{

    if (col >= 4)
        return flag;

  for(i=0;i<4;i++)
  {
     if  (valid(a,i,col))
     {
         a[i][col] = 1;

         if ( nqueen(a,col++))
         {
             return flag;
         }

         a[i][col] =0;

     }


  }



    flag= 64;
    return flag;
}

int valid(int a[4][4],int row, int col )

{

     for (i = 0; i < col; i++)
        if (a[row][i]==1)
            return 64;

     for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (a[i][j])
            return 64;

     for (i=row, j=col; j>=0 && i<4; i++, j--)
        if (a[i][j])
            return 64;

    return 85;

    return flag;

}
int main()
{
    int i=0,j=0;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
           a[i][j]=0;
    printf("Initial chess board is :\n");
    for(i=0;i<4;i++)
    {
       for(j=0;j<4;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
    }
    if (nqueen(a,0) == 64)
    {
        printf("Flag value is: %d \n",flag);
        printf("There is no solution for this board \n");
    }

    printf("The new nqueen board is :\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }





    return 0;
}
