/*
1*2*3*4*17*18*19*20
  5*6*7*14*15*16
    8*9*12*13
      10*11
*/
#include<stdio.h>
int main()
{
	int i,j,k,num,left=1,l,right,r,space=0;
	printf("\nEnter number:");
	scanf("%d",&num);
	right=(num*num)+1;
	for(i=num;i>=1;i--)
	{
		r=right;
		for(k=1;k<=space;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d*",left);
			left++;
		}
		for(l=1;l<=i;l++)
		{
			printf("%d",r);
			if(l<i)
			{
				printf("*");
			}
			r++;
		}
		right=right-(i-1);
		space=space+2;
		printf("\n");
	}
	return 0;
}
