//strong number	145= 1!+4!+5!
#include<stdio.h>
int main()
{
	int i,j,temp,num,sum=0,fact=1,n;
	printf("\nEnter number:");
	scanf("%d",&num);
	n=num;
	while(n>0)
	{
		temp=n%10;
		for(j=1;j<=temp;j++)
		{
			fact=fact*j;
		//	printf("%d\n",fact);
		}
		sum=sum+fact;
		fact=1;
		n=n/10;
	}
			//	printf("%d\n",sum);
	if(sum==num)
	{
		printf("Strong number");
	}
	else
	{
		printf("Not Strong number");
	}
}
