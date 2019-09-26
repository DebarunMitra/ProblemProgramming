/*fibonaci series	0112358...	*/
#include<stdio.h>
int main()
{
	int i,num,temp=1,a=0,b=1;
	printf("\nEnter number:");
	scanf("%d",&num);
	printf("\nFibonaci Series:");
	printf("%d",a);
	printf("%d",b);
	for(i=0;i<num;i++)
	{
		temp=a+b;
		a=b;
		b=temp;
		printf("%d",temp);
	}
	return 0;
}
