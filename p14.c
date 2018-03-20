#include<stdio.h>
#include<string.h>
int main()
{
	char s[30],str[30],s1[30];
	int i,l,j,k;
	printf("Enter the String:");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
		{
			str[j]=s[i];
			j++;
		}
		else
		{
			str[k]=s[i];
			k++;
		}
	}
	strrev(s1);
	printf("\n%s",s1);
  return 0;
}
