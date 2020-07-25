#include<stdio.h>
#include<iostream>
#include<stack>
#include<string> // for string class
using namespace std;
int main()
{
    int n,t,i,j,k;
    string str;
    while(1){
            cin>>t;
            getchar();
            if(t%2==0){
                char ch='$',ch2;
                getline(cin,str);
                if(str[0]==')'&&str[1]==')'){
                    cout<<"No"<<endl;
                    break;
                }
                stack <char> st;
                stack <char> st2;
                st.push(ch);
                st2.push(ch);
                    k=str.size();
                    k--;
                    for(i=0,j=k;i<str.size();i++,j--){
                    ch=str[i];
                    ch2=str[j];
                        if(ch=='('){
                            st.push(ch);
                           }
                        if(ch2==')'){
                            st2.push(ch2);
                        }
                        if(ch==')'&&st.top()!='$'){
                                st.pop();
                        }
                        if(ch2=='('&&st2.top()!='$'){
                            st2.pop();
                           }
                    }
                    if(st.top()=='('&&st2.top()==')'){
                        st.pop();
                        st2.pop();
                    }
                    if(st.top()=='$'&&st2.top()=='$'){
                        cout<<"Yes"<<endl;
                        break;
                    }
                    else{
                        cout<<"No"<<endl;
                        break;
                    }
                }
        else{
            cout<<"NO"<<endl;
            break;
        }
    }
    return 0;
}
