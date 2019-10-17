/*matrix rotation*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void element();
void pointCounter();
void display(int,int);
int i,j,k,l,m,n,p,q;
int arr1[30][30],arr2[30][30],arr3[30][30],row90,col90,tranc,tranr;
int main(){
	while(1)
	{
		char ch;
		printf("\n1.Enter Matrix\n");
		printf("2.Count Point\n");
		printf("3.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :element();
					display(m,n);
					break;
			case 2 :pointCounter();
					//display(row90,col90);
					break;
			case 3 : exit(0);
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
		    	row90=m;col90=n;tranr=m,tranc=n;
}
void display(int row,int col){
		printf("\nMatrix:\n");
	        for(i=0;i<row;i++)
	        {
	        	for(j=0;j<col;j++)
	        	{
	        		printf("%d\t",arr1[i][j]);
	        	}
	        	printf("\n");
	        }
}
//Scoring Tetris game
//Step 3.1: Process each row independently considering no vacant space, If a row is filled, calculate score based on longest chain of same color
//Step 3.2: Now consider vacant spaces also
//Step 3.3: Process rows entirely to find longest chains
void pointCounter(){
	//int arr1[]={1,2,3,4,5,6,7,8,9,10};
	int arr1[]={1,1,1,1,1,1,1,1,1,1};
	//int arr1[]={1,1,1,1,1,1,1,1,2,3};
	//int arr1[]={1,1,1,1,1,1,2,2,2,3};
	int point=0,count=1,col=10;
		for(i=1;i<col;i++)
	        {
	        	if(arr1[i]==arr1[i-1]){
	        		count+=1;
	        		if(i==col-1){//for all match
	        			point+=pow(2,count);
	        		}
	        	}
	        	else{
	        		point+=pow(2,count);
	        		count=1;
	        		if(i==col-1){
	        			point+=pow(2,count);
	        		}
	        	}
	        }
				printf("\t\tFinal POINT:%d",point);
	    }
/*
	//int arr1[]={1,2,3,4,5,6,7,8,9,10};
	//int arr1[]={1,1,1,1,1,1,1,1,1,1};
	//int arr1[]={1,1,1,1,1,1,1,1,2,3};
	int arr1[]={1,1,1,1,1,1,2,2,2,3};
	int point=0,count=1,en=0,cn=0,col=10,elementCount[10],chainCount[10];
	elementCount[en]=arr1[0];en++;
		for(i=1;i<col;i++)
	        {
	        	if(arr1[i]==arr1[i-1]){
	        		count+=1;
	        		if(i==col-1){//for all match
	        			point+=pow(count,2);
	        		}
	        	}
	        	else{
	        		point+=pow(count,2);
	        		printf("\t\tPOINT:%d\n",point);
	        		if(i==col-1){
	        			point+=pow(count,2);
	        		}
	        		count=1;
	        	}
	        }
				printf("\t\tFinal POINT:%d",point);
	    }

*/
