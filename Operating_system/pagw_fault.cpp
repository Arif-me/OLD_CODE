#include <stdio.h>
int frame[100][2];
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
        frame[i][0]=ar[i];
        frame[i][1]=i;
        printf("%d ",frame[i][0]);
        printf("%d \n",frame[i][1]);
        pf++;
    }
    printf("\n");

    for(i=0;i<k;i++){
        for(j=0;j<f;j++){
            if(ar[i]!=frame[j][0]){
                flag=1;
            }
            else{
                printf("\t\t\tNot Matched!!!\n\n");
                flag=0;
                break;
            }
        }
        printf("\t\t\t\t\t====Loop=====\n\n\n");
            if(flag==1){
                frame[j][0]=ar[i];
                frame[j][1]=n;
                n++;
                if(n==2){
                    n=0;
                }
                flag=0;
                pf++;
            }
        printf("\t\t\t%d\n",ar[i]);
        for(j=0;j<f;j++){
            printf("%d ",frame[j][0]);
        }
        printf("\n");
    }
    printf("Page Fault: %d\n",pf);
    return 0;
}
