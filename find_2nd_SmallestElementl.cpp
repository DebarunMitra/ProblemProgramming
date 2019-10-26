/*Find 2nd smallest element in an array*/
#include<stdio.h>
int main()
{
	int arr[30],i,j,n,num,temp;
	printf("\nEnter array size:");
	scanf("\n%d",&n);
	printf("\nEnter array elements:");
	for(i=0;i<n;i++)
		scanf("\n%d",&arr[i]);
	printf("\nArray elements:");
	for(i=0;i<n;i++)
		printf("\t%d",arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	/*printf("\nShorted Array elements:");
	for(i=0;i<n;i++)
		printf("\t%d",arr[i]);*/
	printf("\n2nd Smallest Element is %d",arr[1]);
}
