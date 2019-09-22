/*Pairs of number*/
#include<stdio.h>
int sockMerchant(int n, int ar_count, int* ar) {
	int i,j=0,k,nc=0,nset[n],flag=0,l,pair=0;
	//printf("%d,%d\n",n,ar_count);
	nset[0]=-1;
	for(i=0;i<n;i++)
	{
		for(j=i;j<=i;j++)
		{
				for(k=0;k<=i;k++)
				{
					if(nset[k]==ar[i])
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					for(l=0;l<n;l++)
					{
						if(ar[l]==ar[i])
						{
							nc++;
							printf("\nar[l]:%d && ar[i]:%d && nc:%d",ar[l],ar[i],nc);
						}
					}
					if(nc%2!=0 && nc>2)
					{
						pair+=(nc/2);
						printf("\np:%d",pair);
					}
					else if(nc>=2)
					{
						pair+=(nc/2);
						printf("\np:%d",pair);
					}
				}	
		}
		nset[i]=ar[i];
		flag=0;nc=0;
	}
	printf("\n%d",pair);
	return pair;
}
int main()
{
	int num=20,length=0;
	int arr[]={4,5,5,5,6,6,4,1,4,4,3,6,6,3,6,1,4,5,5,5};
	length=sizeof(arr)/sizeof(arr[0]);
	sockMerchant(num, length, arr);
	return 0;
}
