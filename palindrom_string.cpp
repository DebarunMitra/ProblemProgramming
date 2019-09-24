//palindrom string
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20],temp[20];
	int i,j,len,flag=0;
	printf("Enter a word:");
	scanf("%s",&ch);
	len=strlen(ch);
	//printf("%d",len);
	j=len-1;
	for(i=0;i<len;i++)
	{
		temp[j]=ch[i];
		j--;
	}
	for(i=0;i<len;i++)
	{
		if(ch[i]==temp[i])
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
	}
	printf("\n%s",temp);
	if(flag==1)
	{
		printf("\nPalindrom String");
	}
	else
	{
		printf("\nNot Palindrom String");
	}
	return 0;
}
