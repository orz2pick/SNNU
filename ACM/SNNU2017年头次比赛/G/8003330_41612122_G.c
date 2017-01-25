#include <stdio.h>
#include <math.h>
int main()
{
    int i,a;
    while(scanf("%d",&a)!=EOF)
    {
        getchar();
        if(a==0)
            break;
        int b=a/2,j,b1,c1,f=0,h;
        for(i=2;i<a/2;i++)
        {
            b++;
            b1=sqrt(b);
            c1=sqrt(a-b);
            for(j=2;j<=b1;j++)
            {
                if(b%j==0)
                    break;
            }
            for(h=2;h<=c1;h++)
            {
                if((a-b)%h==0)
                    break;
            }
            if(j>b1&&h>c1)
                ++f;
        }
        printf("%d\n",f);
    }
    return 0;
}
