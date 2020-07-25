#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t!=0){
    long int i,str=0,in=0,exp=0,result=0;
    scanf("%li %li %li",&str,&in,&exp);
    str=str+exp;
    for(i=0;i<=exp;i++){
        if(str>in){
            result++;
            str--;
            in++;
        }
        else if(str<=in){
            break;
        }
    }
    if(result==0){
        if(str>in)
            result++;
    }
    printf("%li\n",result);
    t--;
    }
    return 0;
}
