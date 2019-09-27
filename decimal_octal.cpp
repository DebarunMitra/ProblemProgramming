//decimal_octal
#include<stdio.h>
int main()
{
	int dec=0,rem,i=1,oct=0;
	printf("\nEnter decimal Number:");
	scanf("%d",&dec);
	while(dec>0)
	{
		rem=dec%8;
		oct=oct+rem*i;
		dec=dec/8;
		i=i*10;
	}
	printf("\nOctal Number: %d",oct);
	return 0;
}
