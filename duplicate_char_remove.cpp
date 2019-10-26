/*Remove Duplicate Character from a String or Charactres*/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
    int i,j,k,count=1,len,l,c=0,ct,flag=0;
    char *ch,str[100];
    l=argc-1;
   // printf("\n%d",l);
   str[0]='\n';
    while(l>=count)
    {
        len=strlen(argv[count]);
        ch=(char *)malloc(len);
        ch[0]='\n';
        ch=argv[count];
      //  printf("\n%s",ch);
        for(i=0;i<len;i++)
        {
            if(c>0)
            {
                ct=c-1;
                for(j=0;j<=ct;j++)
                { 
                    flag=0;
                  //  printf("%d,%c,%c\n",ct,str[j],ch[i]);
                    if(str[j]!=ch[i] && str[j]!=' ')
                    {
                        flag=1;
                       //str[c]=ch[i];
                       //c++;
                       //break;
                    }
                    else if(str[j]==ch[i] && str[j]!=' ')
                    {
                        flag=0;
                        break;
                    }
                    else if(str[j]==' ')
                    {
                        continue;
                    }
                }
                if(flag==1)
                {
                      str[c]=ch[i];
                      c++;
                }
                
            }
            else
            {
                str[c]=ch[i];
                c++;
            }
            if(ch[i]==' ')
            {
                str[c]=' ';
                c++;
            }
          //  printf("\nsrt:->%s\n",str);
        }
        count++;
    }
            printf("\n");
    for(i=0;i<c;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
