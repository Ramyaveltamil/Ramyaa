#include <stdio.h>
#include <string.h> 
int main()
{
   String str[100]; 
   printf("Enter a string to reverse:\n");
   gets(str); 
   strrev(str); 
   printf("Reverse of the string is \n%s\n", str); 
   return 0;
}
