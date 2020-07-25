#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,i,sum=0;
    int p=1;
    string ar;
    getline(cin,ar);
    int j=ar.size()-1;
    for(k=j;k>=0;k--){
        int l=ar[k]-'0';
        l=l*p;
        p=p*10;
        printf("%d\tpower=%d\t\n",l,p);
        sum=sum+l;
    }
    cout<<sum<<endl;
    //printf("hello-%d",m);
}
