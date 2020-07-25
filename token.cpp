#include <bits/stdc++.h>
using namespace std;

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
    if(!ch.empty() && !th.empty()){
         dt.push_back(ch);
    }
    int j=dt.size();
    for(int k=0;k<j;k++){
        cout<<"Token:\t"<<dt[k]<<endl;
    }
    return 0;
}
