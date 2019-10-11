#include<stdio.h>
int main(){
	int i,j,a[100][100],l;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
			printf("\n");
	}
	l=sizeof(a[0])/sizeof(a[0][0]);
	printf("%d\n",l);
	return 0;
}
///function for hackerRank
int** dynamicArray(int n, int queries_rows, int queries_columns, int** queries, int* result_count) {
int i,j,la=0,size=0,q,x,y,index,ns0=0,ns1=0;
//    int arr[10][10];
    *result_count=0;
    int** arr = malloc(100 * sizeof(int*));
    for(i=0;i<queries_rows;i++){
        *(arr + i) = malloc(queries_columns * (sizeof(int)));
        for(j=0;j<queries_columns;j++){
            (j==0)?(q=*(*(queries + i) + j)):
            (j==1)?(x=*(*(queries + i) + j)):
            (y=*(*(queries + i) + j));
            //printf("%d\t",*(*(queries + i) + j));
        }
        printf("%d,%d,%d\n",q,x,y);
       if(q==1){
            index=(x^la)%n;
            if(index==0){
                *(*(arr + index) + ns0)=y;
                printf("i:%d,p:%d,%d\n",index,ns0,*(*(arr + index) + ns0));
                ns0++;
            }
            else if(index==1){
                *(*(arr + index) + ns1)=y;
                printf("i:%d,p:%d,%d\n",index,ns1,*(*(arr + index) + ns1));
                ns1++;
            }
            *result_count+=1;
        }
        else if(q==2){
            index=(x^la)%n;
            if(index==0){
                size=i*(j-1);
                la=*(*(arr + index) + (y%size));
                printf("%d\n",la);
            }
            else if(index==1){
                size=i*(j-1);
                la=*(*(arr + index) + (y%size));
                printf("%d\n",la);
            }
        }
        printf("e_c: %d",*result_count);
        printf("\n");
      }
      *result_count-=1;
              printf("e_c: %d",*result_count);
        return arr;
}
