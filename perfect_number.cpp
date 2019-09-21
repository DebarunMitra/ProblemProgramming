//perfect number  6= 1+2+3, 28=1+2+4+7+14
#include<stdio.h>
int main()
{
	int i,j,num,n,temp,sum=0;
	printf("\nEnter number:");
	scanf("%d",&num);
	n=num;
	for(i=1;i<=n/2;i++)
	{
		if((n%i)==0)
		{
		//	printf("\n%d",i);
			sum=sum+i;
		}
					//printf("\n%d",i);
	}
//	printf("%d",sum);
	if(num==sum)
	{
		printf("\nPerfect number");
	}
	else
	{
		printf("\nNot Perfect number");
	}
}
