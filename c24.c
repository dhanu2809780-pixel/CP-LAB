#include<stdio.h>
int main(){
    int a,b;
    printf("enter two members:");
    scanf("%d%d",&a,&b);
    if (a>0)
    {
        if(b>0)
        {
            printf("both numbers are postive\n");
        }
    }
    return 0;
}