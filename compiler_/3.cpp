#include <bits/stdc++.h>
using namespace std;
bool q2(string s,int p);
bool q1(string s,int p)
{
    bool r;
    if(p==s.size())
        return false;
    else if(s[p]=='0')
        r=q1(s,p+1);
    else if(s[p]=='1')
        r=q2(s,p+1);
    else
        return false;
}
bool q2(string s,int p)
{
    bool r;
    if(p==s.size())
        return true;
    else if(s[p]=='0')
        r=q2(s,p+1);
    else if(s[p]=='1')
        r=q1(s,p+1);
    else
        return false;

}
int main()
{
    string s;
    bool res;
    cin>> s;
    res=q1(s,0);
    if(res==true)
        cout<<"Accepted"<<endl;
    else if(res==false)
        cout<<"Rejected"<<endl;
    return 0;
}
