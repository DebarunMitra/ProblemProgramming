//given:-4567, odd=(4+6)=10, even=(5+7)=12, result=12-10=2
#include<stdio.h>
int main()
{
	long long int n;
	//	printf("diff:%lld",a%10);
	int num[100],i=0,j,count=0,temp,odd=0,even=0,sum;
	scanf("%lld",&n);
	while(n>0)
	{
		temp=n%10;
		num[i]=temp;
		n=n/10;
		i++;
		count++;
		printf("%d\n",temp);
	}
	i=0;
	for(j=count-1;j>=0;j--)
	{
		if(i%2==0)
		{
			even=even+num[j];
			i++;
		}
		else
		{
			odd=odd+num[j];
			i++;
		}
	}
	odd>even?sum=odd-even:sum=even-odd;
		printf("diff:%d",sum);
	return 0;
}
