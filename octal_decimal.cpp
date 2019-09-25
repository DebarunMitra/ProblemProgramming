//octal_decimal
#include<stdio.h>
#include<math.h>
int main()
{
	int dec=0,rem,i=0,oct;
	printf("\nEnter Octal Number:");
	scanf("%d",&oct);
	while(oct>0)
	{
		rem=oct%10;
		dec=dec+(rem*pow(8,i));
		oct=oct/10;
		i++;
	}
	printf("\nDecimal Number: %d",dec);
	return 0;
}
