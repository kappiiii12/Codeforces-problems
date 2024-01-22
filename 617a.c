#include <stdio.h>
 
int main()
{
 int x;
 scanf("%d",&x);
 
 if(x%5==0)
     {
        x=x/5;
        printf("%d",x);
     }
 else
    {
           x=x/5;
           printf("%d",x+1);
    }
}
