/*matrix rotation*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void element();
void multipli();
void transpose(int,int);
void rotate180();
void optrotate90aclock(int,int);
void rotate90clock(int,int);
void rotate90aclock(int,int);
void reverseColumns(int,int);
void pointCounter(int,int);
void display(int,int);
int i,j,k,l,m,n,p,q;
int arr1[30][30],arr2[30][30],arr3[30][30],row90,col90,tranc,tranr;
int main(){
	while(1)
	{
		char ch;
		printf("\n1.Enter Matrix\n");
		printf("2.Multipli Matrix\n");
		printf("3.Transpose Matrix\n");
		printf("4.Rotate 90 deg(clock wise)\n");
		printf("5.Rotate 90 deg(anti-clock wise)\n");
		printf("6.Rotate 180 deg(clock wise)\n");
		printf("7.Rotate 180 deg(anti-clock wise)\n");
		printf("8.Rotate 90 deg(a-c,n X n)\n");
		printf("9.Count Point\n");
		printf("11.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :element();
					display(m,n);
					break;
			case 2 :multipli();
					break;
			case 3 :transpose(tranr,tranc);
					display(tranr,tranc);
					break;
			case 4 :rotate90clock(row90,col90);
				    display(row90,col90);
					break;
			case 5 :rotate90aclock(row90,col90);
				    display(row90,col90);
					break;
			case 6 :rotate90clock(row90,col90);
					rotate90clock(row90,col90);
					display(row90,col90);
					break;
			case 7 :rotate90aclock(row90,col90);
					rotate90aclock(row90,col90);
					display(row90,col90);
					break;
			case 8 :optrotate90aclock(row90,col90);
					display(row90,col90);
					break;
			case 9 :pointCounter(row90,col90);
					//display(row90,col90);
					break;
			case 11 : exit(0);
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
void transpose(int trr,int trc){
	int temp;
	(trr!=trc)?(trr>trc)?(trc=trc+1,tranr=trr-1,tranc=trc):(trr<trc)?(trr=trr+1,tranr=trr,tranc=trc-1):false:false;
		for (i = 0; i < trr; i++){
				for (j = i; j < trc; j++){
					temp=arr1[i][j];
					arr1[i][j]=arr1[j][i];
					arr1[j][i]=temp;
				} 
		}
		printf("\nTranspose of entered matrix\n");
		row90=tranr;col90=tranc;
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
void reverseColumns(int x,int y){
	int temp;
	for (i=0;i<x;i++) {
			for (j = 0, k = y - 1; j < k; j++, k--) {
					temp=arr1[j][i];
					arr1[j][i]=arr1[k][i];
					arr1[k][i]=temp;
			} 
	}
	display(row90,col90);
}
void rotate90clock(int x, int y){
	int i,j,rot[30][30],r=y,c=x,temp;
	for(i=0;i<row90/2;i++){
		for(j=0;j<col90;j++){
			rot[j][c-1]=arr1[i][j];
		//	printf("\trot[%d][%d]:%d",j,c-1,rot[j][c-1]);
		}
		//	printf("\n");
			c-=1;
	}
	//printf("\nMatrix 90 deg:\n");
	        for(i=0;i<col90;i++)
	        {
	        	for(j=0;j<row90;j++)
	        	{
	        		//printf("\t%d",rot[i][j]);
	        		arr1[i][j]=rot[i][j];
	        	}
	        	//printf("\n");
	        }
	        row90=y;col90=x;
}
void rotate90aclock(int x, int y){
	int i,j,rot[30][30],r=y,c=x;
	for(i=0;i<row90;i++){
		for(j=0;j<col90;j++){
			rot[r-1][i]=arr1[i][j];
		//	printf("\trot[%d][%d]:%d",r-1,j,rot[r-1][i]);
			r-=1;
		}
		//	printf("\n");
			r=y;
	}
		//	printf("\nMatrix 90 deg(anti clock):\n");
	        for(i=0;i<col90;i++)
	        {
	        	for(j=0;j<row90;j++)
	        	{
	        		//printf("\t%d",rot[i][j]);
	        		arr1[i][j]=rot[i][j];
	        	}
	        //	printf("\n");
	        }
	      	row90=y;col90=x;
}
void optrotate90aclock(int x,int y){
	int i,j,rot[30][30],r=y,c=x,temp;
	for(i=0;i<row90/2;i++){
		for(j=0;j<row90-i-1;j++){
            temp = arr1[i][j];   
            arr1[i][j] = arr1[j][row90-1-i]; 
            arr1[j][row90-1-i] = arr1[row90-1-i][row90-1-j]; 
            arr1[row90-1-i][row90-1-j] = arr1[row90-1-j][i]; 
            arr1[row90-1-j][i] = temp; 
		}
	}
}
void pointCounter(int row,int col){
	int point=0,p[10],count=0,num[10];
	for(i=0;i<row;i++)
	        {
	        	for(j=0;j<col;j++)
	        	{
	        		//printf("%d\t",arr1[i][j]);
	        		//num[j]=arr1[i][j];
	        		if(j>=3){
	        			if(num[j-1]==num[j-2] && num[j-2]==num[j-3] && num[j-1]==num[j-3]){
	        				//printf("\telse");
							point+=10*3;
	        			}
	        			else{
	        			//	printf("\telse");
	        				num[j]=arr1[i][j];
	        			}
	        		}
	        		else{
	        			num[j]=arr1[i][j];
	        		}
	        		//printf("\t\tnum:%d",num[j]);
	        	}
	        	//printf("\n");
	        }
	        	        	printf("\t\tPOINT:%d",point);
}
