/*
Scoring Tetris game
Step 3.1: Process each row independently considering no vacant space, If a row is filled, calculate score based on longest chain of same color
Step 3.2: Now consider vacant spaces also
Step 3.3: Process rows entirely to find longest chains
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void setRowCol();
void enterValue(int,int);
void traverseColValue(int,int);
struct node
{
	int data;
	struct node *east;
	struct node *west;
	struct node *north;
	struct node *south;
};
struct node *arr[4];
int row,col,c_row,c_col,v_east=NULL,v_west=NULL,v_north=NULL,v_south=NULL,flag=0,count_row=0;
int main()
{
	int i,j,k;
	while(1)
	{
		int ch,item;
		printf("\n1.Enter Block ROW & COL\n");
		printf("2.Enter Element\n");
		printf("3.Traverse Element\n");
		printf("4.Exit\n");
		printf("Enter your choise:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :setRowCol();
					break;
			case 2 :enterValue(c_row,c_col);
					break;
			case 3 :traverseColValue(c_row,c_col);
					break;
			case 4 : exit(0);
					 break;
			default : printf("Invalid input \n\n ");
		}
	}
	return 0;
}
void setRowCol(){
	printf("\nEnter row & column:");
	scanf("%d%d",&row,&col);
	c_row=row;c_col=col;
	
}
void enterValue(int r,int c)
{
	struct node *p,*q;
	int i,j,k;
	for(i=0;i<r;i++){
		arr[i]=(struct node *)malloc(sizeof(struct node));
		arr[i]=NULL;
		for(j=0;j<c;j++){
			struct node *temp;
			temp=(struct node *)malloc(sizeof(struct node));
			printf("Enter node data:");
			scanf("%d",&temp->data);
			temp->east=NULL;temp->west=NULL;temp->north=NULL;temp->south=NULL;
			if(arr[i]==NULL){
				arr[i]=temp;
			}
			else{
				p=(struct node *)malloc(sizeof(struct node));
				for(p=arr[i];p->south!=NULL;p=p->south);
				p->south=temp;
				temp->north=p;
				if(i>0){
					arr[i-1]->east=arr[i];
					arr[i]->west=arr[i-1];
					q=(struct node *)malloc(sizeof(struct node));
					for(q=arr[i-1],k=0;k<j;q=q->south,k++);
					printf("\nq.data:%d q.data:%d ,q.east:%d ,q.east:%d \n",q->data,q->east,q->west);
					q->east=temp;
					temp->west=q;	
				}
			}	
		}
	}
	traverseValue(r,c);
}
void traverseColValue(int r,int c)
{
		int i;
		for(i=0;i<r;i++){
			struct node *temp;
			temp=(struct node *)malloc(sizeof(struct node));
			for(temp=arr[i];temp->south!=NULL;temp=temp->south){
				printf("arr:%d, arr->data:%d, arr->north:%d, arr->east:%d, arr->south:%d, arr->west:%d,\n",temp,temp->data,temp->north,temp->east,temp->south,temp->west);
			}
			printf("arr:%d, arr->data:%d, arr->north:%d, arr->east:%d, arr->south:%d, arr->west:%d,\n",temp,temp->data,temp->north,temp->east,temp->south,temp->west);
		}
}
