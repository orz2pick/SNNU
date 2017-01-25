#include<cstdio>

int main()
{
    long long n,a,b,a1;
    while(scanf("%lld",&n)!=EOF)
    {
        a=3;
        b=1;
        if(n==-1)
            break;
        if(n==0)
        {
            printf("%d, %d\n",1,0);
            continue;
        }
        if(n==1)
        {
            printf("%lld, %lld\n",a,b);
            continue;
        }
        for(int z=2;z<=n;z++)
        {
            a1=a;
            a=a*3+b*2;
            b=a1+b;
        }
        printf("%lld, %lld\n",a,b);
    }
}
