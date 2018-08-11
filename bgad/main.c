#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,k;
  float result;
  //clrscr();
  printf("Enter your choice:\n1) for addition 2) for subtraction 3) for multiplication 4) for division\n");
  scanf("%d",&i);
  printf("Enter the two numbers\n");
  scanf("%d %d",&j,&k);
  if(i== 1)
  	result= j+k;
  if(i==2)
  	result= j-k;
  if(i==3)
  	result= j*k;
  if(i==4)
  	result= j/k;
 printf("Result =%f\n", result);
 getch();
 return 0;






}
