//string pattern checker   aaAAbbccDD
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20];
	int i,j=0,k=0,len,temp,count=0,arr1[20],arr[20]; 
	printf("\nEnter a string:");
	scanf("%s",&ch);
	//printf("%c",120);
	len=strlen(ch);
	for(i=0;i<len;i++)
	{
		temp=ch[i];
		if((temp>=65 && temp<=90) || (temp>=97 && temp<=120))
		{
			if(i>0)
			{
				if(ch[i]==arr[j-1])
				{
					continue;
				}
				else
				{
					arr[j]=ch[i];
					j++;					
				}
			}
			else
			{
					arr[j]=ch[i];
					j++;
			}
		}
	}
	j=0;
	for(i=0;i<=len;i++)
	{
		if((ch[i]==arr[j]))
		{
		//	printf("%c\n",arr[j]);
			count++;
		}
		else
		{
			arr1[k]=count;
		//						printf("%c%d\n",arr[j],arr1[k]);
			j++;
			i--;
			k++;
			count=0;
		}

	}
	for(i=0;i<j;i++)
	{
		printf("\nNo of '%c' : %d",arr[i],arr1[i]);
	}
	return 0;
}
