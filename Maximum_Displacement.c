#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int game(char Str[100],int N)
{
    int disp=0,i=0,j=0,k=0,t,m,rev=0,temp[strlen(Str)];

    while(j<N && i<strlen(Str))
    {
        if(Str[i]=='R')
        {
            Str[i]='S';
            j++;
        }
        i++;
    }
    
    //reversing the string
    // for(k=0,t=strlen(Str)-1;k<strlen(Str),t>=0;k++,t--)
    // {
    //     temp[t]=Str[k];
    // }
    // i=0;
    // while(j<N && i<strlen(Str))
    // {
    //     if(Str[i]=='S')
    //     {
    //         Str[i]='R';
    //         j++;
    //     }
    //     i++;
    // }
    //--------------------------
        // if(j<N)
        // {
        //     for(k=strlen(Str)-1;k>=0;k--)
        //     {
        //     while(Str[k]=='S' && j<N)
        //     {    
        //         Str[k]='R';
        //         j++;
        //         k--;
        //     }
        //     if(j>=N)
        //         break;
        //     }
        // }
        
    for(i=0;i<strlen(Str);i++)
    {
        if(Str[i]=='S' && (rev%2)==0)
            disp++;
        else if(Str[i]=='R')
            rev++;
        else if(Str[i]=='S' && (rev%2)!=0)
            disp--;
    }
    if((N-j)%2!=0)
        disp--;
    
    return disp;
}

int main()
{
    char Str[100];
    int N,count;  
    //printf("\nInput the string : ");
    scanf("%s",&Str);
    scanf("%s",&N);
    count = game(Str,N);
    printf("%d",count);
}
