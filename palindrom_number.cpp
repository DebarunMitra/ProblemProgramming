//palindrom number	1221,12344321
#include<stdio.h>
int main()
{
	int i,num,n,temp=0,n1;
	printf("\nEnter a number:");
	scanf("%d",&num);
	n1=num;
	while(num>0)
	{
		n=num%10;
		temp=(temp*10)+n;
		num=num/10;
	}
	if(n1==temp)
	{
		printf("palindrom number");
	}
	else
	{
		printf("Not palindrom number");
	}
	return 0;
}
