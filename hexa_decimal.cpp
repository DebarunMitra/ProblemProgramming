//hexadecimal_decimal
#include<stdio.h>
#include<string.h>
int main()
{
	char hexa[25];
	int dec=0,rem,i=0,len,base=1;
	printf("\nEnter Hexadecimal Number:");
	gets(hexa);
	len=strlen(hexa);
	for(i=len-1;i>=0;i--)
	{
		if(hexa[i]>='0' && hexa[i]<='9')
		{
			dec=dec+base*(hexa[i]-48);
		}
		else if(hexa[i]>='A' && hexa[i]<='F')
		{
			dec=dec+base*(hexa[i]-55);
		}
		base=base*16;
	}
	printf("\nDecimal Number: %d",dec);
	return 0;
}
