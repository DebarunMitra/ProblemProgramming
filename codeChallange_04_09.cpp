/*find binary sequence*/
#include <stdio.h>
#include<math.h>
int gcdString(long long int input,long long int first[25],long long int second[25],long long int start)
{
	long long int bin=0,dec=0,mul=1,rem,count=1,i=0,j=0,k,tc,bi[150],n=0;
    if(input>=start)
    {
    //	printf("true");
    	bi[0]=1;
        for(j=1;j<first[start-1];j++)
        {
	//	printf("f:%d|s:%d\n",first[start-1],second[start-1]);
            if(j>1 && (count==second[start-1]) && count!=1)
            {
            	bi[j]=1;
            	count=1;
            }
            else if(count==1 || count!=second[start-1])
            {
            	bi[j]=0;
            	count++;
            }
        //    printf("%d\n",bi[j]);
        }
        for(i=first[start-1]-1;i>=0;i--)
		{
			bin += (mul * bi[i]);
  		    mul *= 10;
  		    	//	printf("%d\n",bin);
		}
	//	printf("%d",bin);
		while(bin>0)
		{
			rem=bin%10;
			dec=dec+(rem*pow(2,n));
			bin=bin/10;
			n++;
		}
		printf("%lld\n",dec);
    	gcdString(input,first,second,start+1);
    }
    else
    {
    	printf("false");
    	return false;
    }
}
int main()
{
	long long int input,f[100],s[100],i,fl,sl;
    scanf("%d",&input);
    for(i=0;i<input;i++)
    {
    	scanf("%d%d",&f[i],&s[i]);
    }
    gcdString(input,f,s,1);
}
