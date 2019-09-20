//string reversal
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j,len,count=0,c=0;
	char ch[25],str[25];
	printf("\nEnter a string:");
	//scanf("%s",&ch);
	gets(ch);
	//printf("%d\n",strlen(ch));
	while(ch[c]!='\0')
	{
		//printf("%c\n",ch[c]);
		if(ch[c]==' ')
		{
			count++;
			c++;
			continue;
		}
		else
		{
			count++;
			c++;
		}
	}
	c=0;
//	str=(char*)realloc(str,count*sizeof(char));
	for(i=count-1;i>=0;i--)
	{
		if(ch[i]==' ')
		{
			str[c]=' ';
			c++;
		}
		else
		{
			str[c]=ch[i];
			c++;
		}
	}
	for(i=0;i<count;i++)
	{
		printf("%c",str[i]);
	}
	//printf("%d",count);
}
