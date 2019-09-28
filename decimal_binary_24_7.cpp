//decimal_binary
#include<stdio.h>
int main()
{
	long bi=0;
	int dec=0,rem,i=1;
	printf("\nEnter decimal Number:");
	scanf("%d",&dec);
	while(dec>0)
	{
		rem=dec%2;
		bi=bi+rem*i;
		dec=dec/2;
		i=i*10;
	}
	printf("\nDecimal Number: %ld",bi);
	return 0;
}
