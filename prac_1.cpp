#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sr="abcde",sp="";
    int i,j,k;
    char ch;
    for(i=1;i<=5;i++){

        int ok=1;
        j=0;
        while(ok==1){
            sp=sr[j];
            j=j+1;
            cout<<sp<<endl;
        if(j==5){
            ok=0;
            }
        }
        sp=sr[i];
        cout<<endl;
    }


    return 0;
}
