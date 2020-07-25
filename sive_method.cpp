#include <stdio.h>
#include <math.h>
int a[100000];
void sive()
{
    a[0]=a[1]=0;
    int n=sqrt(100000);
    int i,j,k;
    for(i=2;i<n;i++){
        if(a[i]==0){
            for(j=i;j*i<100000;j++){
                a[j*i]=1;
            }
        }
    }

}
int main()
{
    sive();
    int b,t;
    scanf("%d",&t);
    for(b=1;b<=t;b++){
        if(b==1)
        printf("\t\t%d=Not Prime.\n",b);
        else if(a[b]==0)
        printf("%d=Prime.\n",b);
        else
        printf("\t\t%d=Not Prime.\n",b);
    }

    return 0;
}
