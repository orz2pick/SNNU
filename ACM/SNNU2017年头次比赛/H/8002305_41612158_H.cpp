#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

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
        min1=100000;
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
        sort(cun,cun+n);
        printf("%d\n",cun[0]);
    }
    return 0;
}
