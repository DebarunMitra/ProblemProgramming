//decimal_hexadecimal
#include<stdio.h>
#include<string.h>
int main()
{
	char hexa[25];
	int dec=0,rem,i=1,count=0;
	printf("\nEnter decimal Number:");
	scanf("%d",&dec);
	while(dec>0)
	{
		rem=dec%16;
		if(rem>=10)
		{
			hexa[count]=rem+55;
		}
		else
		{
			hexa[count]=rem+48;
		}
		dec=dec/16;
		count++;
	}
	for(i=count-1;i>=0;i--)
	{
		printf("%c",hexa[i]);
	}
	return 0;
}
