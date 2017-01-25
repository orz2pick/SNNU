#include<cstdio>

int main()
{
    int n,a,b,right,left,num;
    while(scanf("%d",&n)!=EOF)
    {
        for(int z=0;z<n;z++)
        {
            left=0;
            right=0;
            scanf("%d%d",&a,&b);
            if(a==1||b==1)
            {
                if(a>b)
                    left=a-b;
                else
                    right=b-a;
            }
            else
            {
                for(int q=0;;q++)
                {
                    if(a>b)
                    {
                        num=a/b;
                        a-=num*b;
                        left+=num;
                    }
                    else
                    {
                        num=b/a;
                        b-=num*a;
                        right+=num;
                    }
                    if(a==1||b==1)
                    {
                        if(a==1)
                            right+=b-a;
                        if(b==1)
                            left+=a-b;
                        break;
                    }
                }
            }
            printf("Scenario #%d:\n%d %d\n\n",z+1,left,right);
        }
    }
    return 0;
}
