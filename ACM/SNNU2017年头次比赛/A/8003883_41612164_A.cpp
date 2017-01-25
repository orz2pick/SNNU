#include<stdio.h>
int main()
{
    int i,t,a,b,l,r;
    scanf("%d",&t);
    for (i=1;i<t+1;i++)
    {
        scanf("%d%d",&a,&b);
        l=r=0;
        while(a!=1||b!=1)
        {
            if(a==1||b==1)
            {
               if(a==1)
               {
                   r+=b-a;
                   b=1;
               }
               else
               {
                   l+=a-b;
                   a=1;
               }
            }
            else if(a>=b)
            {
                l+=a/b;
                a=a%b;
            }
                else
                {
                    r+=b/a;
                    b%=a;
                }
        }
        printf("Scenario #%d:\n%d %d\n\n",i,l,r);
    }
    return 0;
}