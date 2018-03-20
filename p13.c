#include<stdio.h>
int main()
{
	int n,r,s=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		r=r*r;
		s=s+r;
		n=n/10;
	}
	printf("%d",s);
   return 0;
}
