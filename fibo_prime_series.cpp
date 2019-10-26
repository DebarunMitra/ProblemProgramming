/*fibonacci series & prime series** 1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17, … */

/*

This series is a mixture of 2 series – all the odd terms in this series form a Fibonacci series and all the even terms are the prime numbers in ascending order. 

Write a program to find the Nth term in this series. 

The value N is a Positive integer that should be read from STDIN. The Nth term that is calculated by the program should be written to STDOUT. Other than the value of Nth term, no other characters/strings or message should be written to STDOUT. 

For example, when N = 14, the 14th term in the series is 17. So only the value 17 should be printed to STDOUT
*/
#include <stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int n;
    n=atoi(argv[1]);
    if(n%2==0)
    {
        //prime number series
        int i,j,flag=1,num,count=0;
        num=n/2;
        for(i=2;i<=30;i++)
        {
            flag=1;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    flag=0;
                }
            }
            if(flag==1)
            {
                count++;
                //printf("c:%d\t",count);
               // printf("i:%d\t",i);
            }
            if(count==num && flag==1)
            {
                printf("\n%d",i);
                break;
            }
        }
    }
    else
    {
        int i,sum,num,a=0,b=1,count=2;
        num=(n+1)/2;
        if(num==1)
        {
            printf("\n%d",b);
        }
        else
        {
            for(i=2;i<=num;i++)
            {
                sum=a+b;
                a=b;
                b=sum;
                if(count==num)
                {
                    printf("\n%d",sum);
                    break;
                }
                count++;
            }
        }
    }
    return 0;
}
