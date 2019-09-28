/*count 1 from binary bit*/
#include<stdio.h>
int main()
{
	int bi,i,j,num,n,count=0;
	printf("\nEnter Binary Number:");
	scanf("%d",&bi);
	num=bi;
	while(num)
	{
		
               if( (num&1) == 1)
                    count++;
              
               num = num >> 1;
          
		/*n=num%2;
		printf("\n%d",n);
		num=num/2;*/
	}
	printf("\n%d",count);
	return 0;
}
