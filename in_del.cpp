#include <bits/stdc++.h>
int ar[100];
int n=10;
void ins(int a,int b)
{
    n++;
    int i,flag=0;
    for(i=n;i>=0;i--){
        ar[i]=ar[i-1];
    }
    ar[a-1]=b;
}
void del(int a,int b)
{
    int i;
    for(i=a;i<n;i++)
    {
        ar[i-1]=ar[i];
    }
    n--;
}
int main()
{
    int i,j,item,pos;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Insert item: ");
    scanf("%d",&item);
    printf("Insert pos: ");
    scanf("%d",&pos);
    ins(pos,item);
    del(pos,item);
    for(i=0;i<n;i++){
        printf("%d\n",ar[i]);
    }
    return 0;
}
