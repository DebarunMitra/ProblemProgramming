//spiral model of prime series
#include<stdio.h>
int main()
{
	int prime[30],seq[30],ref[30],x[20],y[20],n1=1,flag=1,n2=0,i,j,a=0,fl=1,val,count=0,s=1,num,m[5],c=0;
	seq[0]=1;
	seq[1]=2;
	x[0]=0;
	y[0]=0;
	ref[0]=0;
	for(i=2;i<10;i++)
		seq[i]=seq[i-1]+2;
	/*for(i=0;i<10;i++)
		printf("seq[%d]:-%d\t",i,seq[i]);
		printf("\n");*/
	for(i=2;i<35;i++)
	{
		fl=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				fl=0;
				break;
			}
		}
		if(fl==1)
		{
			prime[a]=i;
			a++;
		}
	}
/*	for(i=0;i<a;i++)
		printf("%d\t",prime[i]);*/
	for(i=1;i<=18;i++)
	{
		count=i;
	//	ref[count]=prime[count];
	//	printf("\nref:%d----prime:%d\n",i,ref[i]);
		if(seq[s]%4==0)
		{
		//	printf("seq:%d\n",seq[s]);
			val=seq[s]/2;
			for(j=1;j<=seq[s];j++)
			{
				if(j<=val)
				{
					if(flag==1)
					{
						n1=1;
						ref[count]=prime[count];
						x[count]=x[count-1]+n1;
						y[count]=y[count-1]+n2;
					//	printf("count:%d--prime:%d->(%d,%d)\n",count,ref[count],x[count],y[count]);
						count++;
					}
					else
					{
						n1=-1;
						ref[count]=prime[count];
						x[count]=x[count-1]+n1;
						y[count]=y[count-1]+n2;
					//	printf("count:%d--prime:%d->(%d,%d)\n",count,ref[count],x[count],y[count]);
						count++;
					}	
				}
				else
				{
					if(flag==1)
					{
						n1=1;
						ref[count]=prime[count];
						x[count]=x[count-1]+n2;
						y[count]=y[count-1]+n1;
					//	printf("count:%d--prime:%d->(%d,%d)\n",count,ref[count],x[count],y[count]);
						count++;
					}
					else
					{
						n1=-1;
						ref[count]=prime[count];
						x[count]=x[count-1]+n2;
						y[count]=y[count-1]+n1;
					//	printf("count:%d--prime:%d->(%d,%d)\n",count,ref[count],x[count],y[count]);
						count++;
					}
				}	
			}
			if(flag==1)
			{
				flag=0;
			}
			else
			{
				flag=1;
			}
			i=count-1;
			//s++;
		//	printf("\n******'%d'******\n",i);
		}
		else if(seq[s]%2==0)
		{	
		//	printf("seq:%d\n",seq[s]);
			val=seq[s]/2;
			for(j=1;j<=seq[s];j++)
			{
				if(j<=val)
				{
					if(flag==1)
					{
						n1=1;
						ref[count]=prime[count];
						x[count]=x[count-1]+n1;
						y[count]=y[count-1]+n2;
					//	printf("count:%d--prime:%d->(%d,%d)\n",count,ref[count],x[count],y[count]);
						count++;
					}
					else
					{
						n1=-1;
						ref[count]=prime[count];
						x[count]=x[count-1]+n1;
						y[count]=y[count-1]+n2;
					//	printf("count:%d--prime:%d->(%d,%d)\n",count,ref[count],x[count],y[count]);
						count++;
					}	
				}
				else
				{
					if(flag==1)
					{
						n1=1;
						ref[count]=prime[count];
						x[count]=x[count-1]+n2;
						y[count]=y[count-1]+n1;
					//	printf("count:%d--prime:%d->(%d,%d)\n",count,ref[count],x[count],y[count]);
						count++;
					}
					else
					{
						n1=-1;
						ref[count]=prime[count];
						x[count]=x[count-1]+n2;
						y[count]=y[count-1]+n1;
					//	printf("count:%d--prime:%d->(%d,%d)\n",count,ref[count],x[count],y[count]);
						count++;
					}
				}	
			}
			if(flag==1)
			{
				flag=0;
			}
			else
			{
				flag=1;
			}
			i=count-1;
			//s++;
			//printf("\n******'%d'******\n",i);		
		}
		s++;
	}
	printf("\nEnter no of item:");
	scanf("%d",&num);
	printf("\nEnter prime item:");
	for(i=0;i<num;i++)
		scanf("\n%d",&m[i]);
	while(num>0)
	{
		for(i=0;i<=15;i++)
		{
			if(m[c]==ref[i])
			{
				printf("%d %d\n",x[i],y[i]);
				break;
			}
		}
		c++;
		num--;
	}
	return 0;
}
