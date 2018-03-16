#include<stdio.h>
void main()
{
  int r,n,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);
  while(n>0)
  {
    r=n%10;
    n=n/10;
    sum=(sum*10)+r;
  }
  printf("%d",sum);
}
