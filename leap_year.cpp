/*LEAP YEAR */
#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int y,flag=0;
    //argv[1]="1900";
    y=atoi(argv[1]);
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                printf("\n%d is Leap Year.",y);
            }
            else
            {
                printf("\n%d is not Leap Year.",y);
            }
        }
        else
        {
            printf("\n%d is Leap Year.",y);
        }
    }
    else
    {
        printf("\n%d is not Leap Year.",y);
    }
    return 0;
}

