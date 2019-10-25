/*
   1
  2 2
 3 3 3
4 4 4 4
*/
#include<stdio.h>
int main()
{
	int num,i,j,k;
	printf("\nEnter number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(k=1;k<=(num-i);k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
