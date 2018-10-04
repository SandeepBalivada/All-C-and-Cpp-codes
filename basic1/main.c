#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
 int i,j,m,n;
 //clrscr();
 printf("printing the prime numbers in a definite range:\n\n Enter the first and last numbers in the range of numbers :");
 scanf("%d,%d",&i,&j);
 printf("the prime numbers present in the range of %d to %d is:",i,j);
/* for(m=i;m<j;m++)
 {
     for(n=0;n<m/2;n++)
     {
         if(m%n==0)
            printf("%d\n",m);
     }
 }*/
 getch();

 return 0;
}
