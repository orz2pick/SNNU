#include<cstdio>
#include<cstring>

int a[100000];
int cun[100000];

int j(int x)
{
    if(x<0)
        x=-x;
    return x;
}

int main()
{
    int m,n,min1;
    scanf("%d",&m);
    for(int z=0;z<m;z++)
    {
        min1=1000000000;
        memset(a,0,sizeof(a));
        memset(cun,0,sizeof(cun));
        scanf("%d",&n);
        for(int q=0;q<n;q++)
        {
            scanf("%d",&a[q]);
        }
        for(int q=0;q<n;q++)
        {
            for(int s=0;s<n;s++)
                cun[q]+=j(a[s]-a[q]);
        }
        for(int s=0;s<n;s++)
            if(min1>cun[s])
                min1=cun[s];
        printf("%d\n",min1);
    }
    return 0;
}
