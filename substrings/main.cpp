#include <stdio.h>
#include <stdlib.h>

char* substring(char*, int, int);

int main()
{
   char string[100], *pointer;
   int position, length;

   printf("Input a string\n");
   gets(string);

   printf("Enter the position and length of substring\n");
   scanf("%d%d",&position, &length);

   pointer = substring( string, position, length);

   printf("Required substring is \"%s\"\n", pointer);

   free(pointer);

   return 0;
}

/*C substring function: It returns a pointer to the substring */

char *substring(char *string, int position, int length)
{
   char *pointer;
   int c;

   pointer = (char *)malloc(length+1);

   if (pointer == NULL)
   {
      printf("Unable to allocate memory.\n");
      exit(1);
   }

   for (c = 0 ; c < length ; c++)
   {
      *(pointer+c) = *(string+position-1);
      string++;
   }

   *(pointer+c) = '\0';

   return pointer;
}
