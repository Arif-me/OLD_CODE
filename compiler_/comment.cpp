#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i,flag=0,j;
    char a=47;
    string str;
    freopen("input.txt","r",stdin);
    while(getline(cin,str)){
            j=str.size();
      for(i=0;i<str.size();i++){
        if(str[i]=='/' && str[i+1] == '/' ){
            break;
        }
        else if(str[i]=='/' && str[i+1] == '*' ){
            flag = 1;
            break;
        }
        else if(str[j-1]=='/' && str[j-2] == '*'){
            cout<<str[j];
            flag = 0;
            break;
        }
        else if(flag==0){
            cout<<str[i];
        }
      }
      flag=0;
      cout<<endl;
    }

    return 0;
}
