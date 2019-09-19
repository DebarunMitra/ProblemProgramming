//armstrong number		153=  1^3+5^3+3^3
#include<stdio.h>
int main()
{
	int i,j,temp,num,count=0,sum,pow=1,n;
	printf("\nEnter number:");
	scanf("%d",&num);
	n=num;
	while(n>0)
	{
		count++;
		n=n/10;
	}
	n=num;
	//printf("%d",count);
	while(n>0)
	{
		temp=n%10;
		for(j=0;j<count;j++)
		{
			pow=pow*temp;
			//printf("%d\n",pow);
		}
		sum=sum+pow;
		pow=1;
		n=n/10;
	}
	if(sum==num)
	{
		printf("Amstrong number");
	}
	else
	{
		printf("Not Amstrong number");
	}
}
