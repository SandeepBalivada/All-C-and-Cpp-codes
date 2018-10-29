#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,j,k,flag=0,n;
 int a[10];
 printf("Enter the number of elements you are going to check:\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("Enter your number:\n");
   scanf("%d",&a[i]);
   //to  check whether the number is prime or not
  for(j=2;j<(a[i]/2);j++)
  {
      if(a[i]%j==0)
      {
       //given number is not a prime number
       flag++;
      }
  }
  if(flag==0)
  {
      printf("The entered number %d is a prime number.\n",a[i]);
      printf("%d \n",a[i]);
      flag=0;
  }
  else
  {
   printf("%d is not a prime.\n",a[i]);
    printf("%d \n",(a[i]/(i+1)));
    flag=0;
  }


 }

 printf("Final display:\nInput is: \t Output is: \n");




  return 0;
}


