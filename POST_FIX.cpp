#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sr;
    getline(cin,sr);
    stack <int> st;
    for(int i=0;i<sr.size();i++){
        if(isdigit(sr[i])){
            st.push(sr[i]-'0');
        }
        else if(sr[i]!=' '){
            int a,b,c;
            b=st.top();
            st.pop();
            a=st.top();
            st.pop();
            char op = sr[i];
            if(op=='+'){
                c=a+b;
            }
            else if(op=='-'){
                c=a-b;
            }
            else if(op=='/'){
                c=a/b;
            }
            else if(op=='*'){
                c=a*b;
            }
            st.push(c);
        }
    }
    cout<<st.top();
    return 0;
}
