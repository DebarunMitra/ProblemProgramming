//factorial number 5=120
#include<stdio.h>
int main()
{
	int i,num,temp=1;
	printf("\nEnter number:");
	scanf("%d",&num);
	printf("\nFactorial:");
	for(i=1;i<=num;i++)
	{
		temp=temp*i;
	}
	printf("%d",temp);
	return 0;
}
