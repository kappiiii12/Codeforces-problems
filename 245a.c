#include<stdio.h>
int main()
{
    int n,t,x,y,i,A=0,B=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&t,&x,&y);
        if(t==1)
            A=A+x-y;
        else
          B=B+x-y;
    }
    if(A>=0)
    printf("LIVE\n");
    else
    printf("DEAD\n");
    if(B>=0)
    printf("LIVE");
    else
    printf("DEAD");
    
 
}
