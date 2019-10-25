/*
1
3*2
4*5*6
10*9*8*7
*/
#include<stdio.h>
int main(){
	int n,i,j,count=0,num=1,odd,even,c=1;
	printf("\nEnter Numner:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i>1){
			if(i%2==0){
				odd=num+(i-1);
				for(j=1;j<=i+c;j++){
					printf("%d",odd);
					if(j<i+c){
						printf("*");
						j++;
					}	
					odd--;
					num++;
				}	
				c++;
			}
			else if(i%2!=0){
				for(j=1;j<=i+c;j++){
					printf("%d",num);
					if(j<i+c){
						printf("*");
						j++;
					}	
					even++;
					num++;
				}
				c++;
			}
		}
		else{
			printf("%d",num);
			num++;
		}
		printf("\n");
	}
	return 0;
}
