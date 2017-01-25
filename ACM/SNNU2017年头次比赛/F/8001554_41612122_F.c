#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        if(n==-1)
            break;
        long long int a=1,b=0,c=0;

        for(i=1;i<=n;i++)
        {
            if(n==0)
        {
            printf("%lld, %lld",a,b);
        }
            if(i==1)
            {
                a=3;
                b=1;
            }
        c=b;
            if(i>1)
            {
                b=a+b;
                a=a*3+c*2;

            }
        }
        printf("%lld, %lld\n",a,b);
    }
    return 0;
}
