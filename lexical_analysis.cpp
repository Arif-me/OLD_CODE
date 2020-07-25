#include <bits/stdc++.h>
using namespace std;
int flag=0;
vector<string> v;

void var(string s)
{
    int i,f=0;
    char to=s[0];
    for(i=0;i<s.size();i++){
        to=s[i];
        if(isalpha(to) || isdigit(to)){
            f=1;
        }
        else if(to=='_'){
            f=1;
        }
        else{
            f=0;
            break;
        }
    }
    if(f==1){
         cout<<"This is variable type:"<<s<<endl;
         flag=1;
    }

}

void opr(string s)
{
    int i;
    char t=s[0];
    if(t>=42&&t<=47 || t>=60&&t<=63){
            if(t!='.' && t!=','){
                cout<<"This is operator type:"<<s<<endl;
                flag=1;
            }
    }

}

void sym(string s)
{
    int i;
    char t=s[0];
    if(t>=33&&t<=41 || t>=58&&t<=59 || t==60){
        cout<<"This is Special character type:"<<s<<endl;
        flag=1;
    }

}

void dat(string s)
{
    int i;
    string test="";
    for(i=0;i<v.size();i++){
            test=v[i];
        if(s==test){
        cout<<"This is data type:"<<v[i]<<endl;
        flag=1;
        }
    }

}
int main()
{
    string sr;
    string ch="";
    string th="";
    vector<string> dt;
    string dr="int double long float char";
    for(int i=0;i<dr.size();i++){
        if(dr[i]==' '||dr[i]==','){
            v.push_back(ch);
            ch="";
        }
        else{
            ch=ch+dr[i];
        }
    }
    v.push_back(ch);

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
            }

        }
        else{
            ch=ch+sr[i];
        }
    }
    if(!ch.empty() && !th.empty()){
         dt.push_back(ch);
    }

    int j=dt.size();
    for(int k=0;k<j;k++){
        ch=dt[k];
        if(flag==0){
            //cout<<"in function: "<<ch<<endl;
            dat(ch);
        }

        if(flag==0){
            //cout<<"in function: sym\t"<<ch<<endl;
            sym(ch);
        }

        if(flag==0){
            //cout<<"in function: var\t"<<ch<<endl;
            var(ch);
        }

        if(flag==0){
            //cout<<"in function: opr\t"<<ch<<endl;
            opr(ch);
        }

        flag=0;
    }
    return 0;
}
