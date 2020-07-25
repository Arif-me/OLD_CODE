#include <stdio.h>
int frame[100];
int ar[100];
int main()
{
    int i,j,k,f,pf=0,n=0,t,flag=0,l;
    printf("Input size: ");
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<k;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
    t=f;
    printf("Input frame size: ");
    scanf("%d",&f);
        for(i=0;i<f;i++){
        frame[i]=ar[i];
        printf("%d ",frame[i]);
        pf++;
    }
    printf("\n");

    for(i=0;i<k;i++){
        for(j=0;j<f;j++){
            if(ar[i]!=frame[j]){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
            if(flag==1){
                frame[n]=ar[i];
                n++;
                if(n==f){
                    n=0;
                }
                flag=0;
                pf++;
            }
        printf("\tFor:%d\n",ar[i]);
        for(j=0;j<f;j++){
            printf("%d ",frame[j]);
        }
        printf("\n");
        printf("\t\t\t\t\t====Loop=====\n\n\n");
    }
    printf("Page Fault: %d\n",pf);
    return 0;
}
