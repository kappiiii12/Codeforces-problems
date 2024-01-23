#include <stdio.h>
 
int main()
{
 int k,n,w;
 scanf("%d%d%d",&k,&n,&w);
 w=k*(w*(w+1)/2);
 n=w-n;
 if(n>0)
 printf("%d",n);
 else
 printf("0");
}
