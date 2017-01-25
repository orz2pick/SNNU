#include<cstdio>
#include<cstring>

int su[10000];

int baoli()
{
    int m=1,flag;
    su[0]=2;
    flag=0;
    for(int z=3;z<=10000;z++)
    {
        if(z%2!=0&&z%9!=0&&z%6!=0&&z%21!=0&&z%15!=0&&z%33!=0)
        {
            for(int s=2;s*s<=z;s++)
                if(z%s==0)
                    flag=1;
            if(!flag)
                su[m++]=z;
            flag=0;
        }
    }
    return m-1;
}

int main()
{
    int m,n,cun[10000],flag,n1,s1;
    while(scanf("%d",&n)!=EOF)
    {
        flag=0;
        if(n==0)
            break;
        m=baoli();
        memset(cun,0,sizeof(cun));
        for(int z=0;z<=m;z++)
        {
            n1=n;
            if(n1>su[z])
            {
                n1-=su[z];
                for(int s=z-1;s>=0;s--)
                {
                    if(n1==su[s])
                    {
                        flag++;
                        break;
                    }
                }
            }
        }
        printf("%d\n",flag);
    }
    return 0;
}
