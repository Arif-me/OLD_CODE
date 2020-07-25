#include <stdio.h>
int frame[100];
int frame2[100];
int ar[100];
int fn(int a,int k)
{
    int m,n,p,l=0;
    for(n=0;n<k;n++){
        frame2[n]=0;
    }
    for(m=(a-1);m>=0;m--){
        for(n=0;n<k;n++){
            if(ar[m]==frame[n]){
                    frame2[n]=1;
                    l++;
                break;
            }
        }
        if(l==2){
            break;
        }
    }
    for(n=0;n<k;n++){
            if(frame2[n]==0){
                    p=n;
                    printf("index:%d\n",p);
                break;
            }
        }
    return p;
}
int main()
{
    int i,j,k,f,pf=0,n=0,t,flag=0,l,z;
    printf("Input size: ");
    scanf("%d",&k);
    printf("Please Enter reference String: ");
    for(i=0;i<k;i++){
        scanf("%d",&ar[i]);
    }
    printf("\n");
    t=f;
    printf("Input frame size: ");
    scanf("%d",&f);
    for(i=0;i<f;i++){
        frame[i]=0;
        frame2[i]=0;
    }
    printf("\n");

    for(i=0;i<k;i++){
        for(j=0;j<f;j++){
            if(ar[i]!=frame[j]){
                flag=1;
                n=j;
            }
            else{
                flag=0;
                break;
            }
        }
            if(flag==1){
                z=fn(i,f);
                frame[z]=ar[i];
                flag=0;
                pf++;
                //printf("PAGE fault!");
            }
        //printf("\tFor:%d\n",ar[i]);
        for(j=0;j<f;j++){
            printf("%d ",frame[j]);
        }
        printf("\n");
        printf("\t====Loop=====\n\n");
    }
    printf("\n\n\t\tTotal Page Fault: %d\n",pf);
    return 0;
}
