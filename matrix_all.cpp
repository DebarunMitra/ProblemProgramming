/*matrix rotation*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void element();
void multipli();
void transpose();
void rotate180();
void rotate90(int,int);
void reverseColumns();
void display(int,int);
int length();
int i,j,k,l,m,n,p,q;
int arr1[30][30],arr2[30][30],arr3[30][30],row90,col90;
int main(){
	while(1)
	{
		char ch;
		printf("\n1.Enter Matrix\n");
		printf("2.Multipli Matrix\n");
		printf("3.Transpose Matrix\n");
		printf("4.Rotate 90 deg:\n");
	//	printf("5.Display\n");
	//	printf("6.Length\n");
		printf("7.Exit\n");
		printf("Enter your choise:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :element();
					break;
			case 2 :multipli();
					break;
			case 3 :transpose();
					break;
			case 4 :rotate90(row90,col90);
					break;
		/*	case 5 :display();
					break;
			case 6 :l=length();
					printf("\n%d\n",l);
					break;*/
			case 7 : exit(0);
					 break;
			default : printf("Invalid input \n\n ");
		}
	}
	return 0;
}
void element()
{
		printf("\nEnter 1st matrix row & column:");
		scanf("%d%d",&m,&n);
		printf("\nEnter the elment of 1st matrix:\n");
    	for(i=0;i<=m-1;i++)
  	    	for(j=0;j<=n-1;j++)
		    	scanf("%d",&arr1[i][j]);	
		    	row90=m;col90=n;
	display(m,n);
}
void multipli(){
		printf("\nEnter 2nd matrix row & column:");
		scanf("%d%d",&p,&q);
			printf("\nEnter the element of 2nd matrix:\n");
			for(i=0;i<=p-1;i++)
			   for(j=0;j<=q-1;j++)
			       scanf("%d",&arr2[i][j]);
			printf("\nThe 1st is matrix below:\n");
       	    for(i=0;i<=n-1;i++)
    	    {
	    	   for(j=0;j<=m-1;j++)
		       {
			       printf("%d",arr1[i][j]);
			       printf("\t");
	    	   }
	    	   printf("\n");
	        }
	        printf("\nThe 2nd matrix is below:\n");
	        for(i=0;i<=p-1;i++)
	        {
	        	for(j=0;j<=q-1;j++)
	        	{
	        		printf("%d",arr2[i][j]);
	        		printf("\t");
	        	}
	        	printf("\n");
	        }
	        printf("\nThe multiplication of two matrix:\n");
	        	for(i=0;i<=n-1;i++)
	        	{
	        		for(j=0;j<=q-1;j++)
	        		{
	        			arr3[i][j]=0;
	        		 for(k=0;k<=m-1;k++)
	        		 {
	        			arr3[i][j]=arr3[i][j]+(arr1[i][k]*arr2[k][j]);
	        		 }
	        		}
	        	}
	        	for(i=0;i<=n-1;i++)
	            	{
	             		for(j=0;j<=q-1;j++)
	        	    	{
	        		    	printf("\t%d",arr3[i][j]);
	        			}
	        				printf("\n");
	        		}
}
void transpose(){
	int temp;
		for (i = 0; i < m; i++){
				for (j = i; j < n; j++){
					temp=arr1[i][j];
					arr1[i][j]=arr1[j][i];
					arr1[j][i]=temp;
				} 
		}
		printf("\nTranspose of entered matrix\n");
	    display(m,n);
}
void display(int row,int col){
		printf("\nMatrix:\n");
	        for(i=0;i<row;i++)
	        {
	        	for(j=0;j<col;j++)
	        	{
	        		printf("\t%d",arr1[i][j]);
	        	}
	        	printf("\n");
	        }
}
void reverseColumns(){
	int temp;
	for (i = 0; i < n; i++) {
			for (j = 0, k = n - 1; j < k; j++, k--) {
					temp=arr1[j][i];
					arr1[j][i]=arr1[k][i];
					arr1[k][i]=temp;
			} 
	}
}
void rotate90(int x, int y){
	int i,j,rot[30][30],r=y,c=x;
	for(i=0;i<row90;i++){
		for(j=0;j<col90;j++){
			rot[j][c-1]=arr1[i][j];
		//	printf("\trot[%d][%d]:%d",j,c-1,rot[j][c-1]);
		}
		//	printf("\n");
			c-=1;
	}
	printf("\nMatrix 90 deg:\n");
	        for(i=0;i<col90;i++)
	        {
	        	for(j=0;j<row90;j++)
	        	{
	        		//printf("\t%d",rot[i][j]);
	        		arr1[i][j]=rot[i][j];
	        	}
	        	//printf("\n");
	        }
	        //arr1=rot;
	        row90=y;col90=x;
	        display(row90,col90);
}
