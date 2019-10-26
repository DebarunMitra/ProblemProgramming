/*
string challange
input:
abcd
10
output:
abcdabcdab
a=3
b=3
c=2
d=2
*/
#include<stdio.h>
#include<string.h>
int main(){
	char ch[10],chset[100],n;
	ch[0]='\0';chset[0]='\0';
	int num,len,l=0,i,j,count=0;
	printf("\nEnter a string set to repeat:");
	gets(ch);
	len=strlen(ch);
	printf("\nEnter number of charecters:");
	scanf("%d",&num);
	for(i=0;i<num;i++){
			chset[i]=ch[l];
			l++;
			if(l>=len){
				l=0;
			}
	}
	chset[i]='\0';
	l=strlen(chset);
	printf("\n%s",chset);
	//printf("\n%c,%c,%c,%c",ch[0],ch[1],ch[2],ch[3]);
	for(i=0;i<len;i++){
		n=chset[i];
		for(j=0;j<l;j++){
			if(n==chset[j]){
				count++;
			}
		}
		if(i<len){
			printf("\n%c = %d",chset[i],count);	
		}
		count=0;
	}
	return 0;
}
