#include<stdio.h>
int main()
{
	int a[30],j,i,n,c=0;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("\nEnter the Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if((a[i]==a[j])&&i!=j)
			{
				c++;
			}
		}
		if(c==0)
		{
			printf("%d",a[i]);
		}
	}return 0;
}
