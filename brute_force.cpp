#include<stdio.h>
#include<iostream>
#include<stack>
#include<string> // for string class
using namespace std;
int main()
{
    int t;
    while(1){
    int i,str=0,in=0,exp=0,result=0,ok=0;
    scanf("%d %d %d",&str,&in,&exp);

    t=exp;
    for(i=0;i<=exp;i++){
        if(ok+t==exp){
            result++;
            ok++;
            t--;
        }
        if(ok>str||ok>in){
            break;
        }
    }
    printf("%d\n",result);
    break;
    }
    return 0;
}
