#include <stdio.h>
#include <math.h>
int main()
{
   int n,a[10000],i,T,l,j,count;
   while(scanf("%d",&n)!=EOF)
   {
    if(n==0) break;
    count=l=0;
    for(i=2;i<=n-2;i++)
    {
      T=1;
      for(j=2;j<=sqrt(i);j++)
      {
        if(i%j==0)
        {
         T=0;
         break;
        }
      }
      if(T==1)
      {
        a[l++]=i;
       
      }
    }
    for(i=0;i<l;i++)
    {
       
       for(j=i+1;j<l;j++)
       {
         if(a[i]+a[j]==n)
         count++;
       }
    
    }
    printf("%d\n",count);
   }
   return 0;
}