#include <bits/stdc++.h>
using namespace std;
stack <int> st;
void dig(string ar)
{
    int k,i,sum=0,p=1;
    int j=ar.size()-1;
    for(k=j,i=0;k>=0;k--,i++){
        int l=ar[k]-'0';
        l=l*p;
        p=p*10;
        sum=sum+l;
    }
    st.push(sum);
}
int main()
{
    string sr;
    string ch="";
    string th="";
    vector<string> dt;

    ch="";
    getline(cin,sr);
    for(int i=0;i<sr.size();i++){
        if(!isalpha(sr[i]) && !isdigit(sr[i])){
            if(sr[i]=='_'){
                ch=ch+sr[i];
                continue;
            }
            if(!ch.empty()&&sr[i]!='_'){
                    dt.push_back(ch);
                    ch="";
                }
            if(sr[i]!=' '){
                th=sr[i];
                dt.push_back(th);
                th="";
                }

            }
        else{
            ch=ch+sr[i];
        }
    }
    if(!ch.empty()){
         dt.push_back(ch);
    }
    for(int m=0;m<dt.size();m++){
        cout<<"\t"<<dt[m]<<endl;
    }
    for(int i=0;i<dt.size();i++){

        if(dt[i]=="+"||dt[i]=="-"||dt[i]=="/"||dt[i]=="*"){
            int a,b,c;
            b=st.top();
            st.pop();
            a=st.top();
            st.pop();
            string sr="";
            sr=dt[i];
            char op = sr[0];
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
        else {
                string pp="";
                pp=dt[i];
                dig(pp);
        }
    }
    cout<<st.top();

    return 0;
}
