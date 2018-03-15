#include<stdio.h>
int main()
{
int i,fact=1,a;
printf("Enter the number:");
scanf("%d",&a);
for(i=1;i<=a;i++)
fact=fact*i;
printf("%d",fact);
return 0;
}
