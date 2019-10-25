/*HCF(GCD) & LCM*/
#include<stdio.h>
int main()
{
	int a,b,n1,n2;
	printf("\nEnter two number:");
	scanf("%d%d",&a,&b);
	n1=a;
	n2=b;
	while(n1!=n2)
	{
		if(n1>n2)
		{
			n1=n1-n2;
		}
		else
		{
			n2=n2-n1;
		}
	}
	printf("\nGCD(HCF) of %d & %d is:%d",a,b,n1);
	printf("\nLCM of %d & %d is:%d",a,b,((a+b)/n1));
	return 0;
}
