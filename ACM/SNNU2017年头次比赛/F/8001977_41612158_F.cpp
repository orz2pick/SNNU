#include<cstdio>

long long a[35],b[35];

void f()
{
    a[0]=1;a[1]=3;
    b[0]=0;b[1]=1;
    for(int i=1;i<=33;i++)
    {
       a[i]=a[i-1]*3;
        b[i]=a[i-1]+b[i-1];
        a[i]+=2*b[i-1];
    }
}

int main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==-1)
            break;
        f();
        printf("%lld, %lld\n",a[n],b[n]);
    }
}
