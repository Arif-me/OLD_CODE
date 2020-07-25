#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int q,r;
    char p,m;
    gets(a);
    for(q=0;q<strlen(a);q++){
        p=a[q];
        p=p+3;
        m=p;
        if(a[q]>=65&&a[q]<=90){
            if(p>90){
                r=p%90;
                p=64+r;
                a[q]=p;
            }
            else
                a[q]=m;
        }
        else if(a[q]>=97&&a[q]<=122){
                if(p>122){
                r=p%122;
                p=96+r;
                a[q]=p;
                }
                else
                a[q]=m;
            }
    }
    printf("\n%s\n",a);

    return 0;
}
