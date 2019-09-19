//(()) check
#include<stdio.h>
#include<string.h>
int checker(char *ch)
{
	char open='(',close=')';
	int i=0,len,count=0;
	len=strlen(ch);
		if(ch[i]==open)
		{
			for(i=1;i<len;i++)
			{
				if(ch[i]==close)
				{
					count++;
					//printf("\n%d",count);
				}
				else
				{	
				//	printf("\n%d",i);
					continue;
				}
			}
			//printf("\n%d",count);
			return count;
		}
		else
		{
			printf("start with '(' bracket\n");
			return -1;
		}
}
int main()
{
	char br[10];
	int res;
	printf("Enter Brackets:");
	scanf("%s",&br);
	//printf("\n%s",br);
	res=checker(br);
	if(res>0)
	{
		printf("No of bracket %d",res);
	}
	else
	{
		printf("%d",res);
	}
	return 0;
}
