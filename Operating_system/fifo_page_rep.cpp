#include <stdio.h>
int frame[100][2];
int ar[100];
int main()
{
    int i,j,k,f,pf=0,n=0,t,flag=0;
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
        frame[i][0]=ar[i];
        frame[i][1]=i;
        printf("%d ",frame[i][0]);
        pf++;
    }
    printf("\n");

    for(i=0;i<k;i++){
        for(j=0;j<f;j++){
            if(ar[i]!=frame[j][0]){
                flag=1;
            }
        }
        for(j=0;j<f;j++){
            if(frame[j][1]==n && flag==1){
                    flag=0;
                    pf++;
                frame[j][0]=ar[i];
                frame[j][1]=n;
                n++;
                if(n==f){
                    n=0;
                }
            }
        }
        printf("%d\t",ar[i]);
        for(j=0;j<f;j++){
            printf("%d ",frame[j][0]);
        }
        printf("\n");
    }
    printf("Page Fault: %d\n",pf);
    return 0;
}
