#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sr="abcd",sp="",st="";
    int i,j,k;
    char ch;
    for(i=0;i<4;i++){
        for(j=i;j<4;j++){
            ch=sr[i];
            sp=sp+sr[j];
            cout<<sp<<endl;
            sp=st;
        }
        st=st+sr[i];
        sp=st;
        cout<<"______________ok___________"<<endl;
    }


    return 0;
}

