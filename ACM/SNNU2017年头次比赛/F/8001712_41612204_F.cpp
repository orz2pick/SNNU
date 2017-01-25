#include<stdio.h>
 __int64 biao[35],sieve[35];
 int main()
 {
     int i,j,n;
     biao[1]=3;sieve[1]=1;
     for(i=2;i<34;i++)
     {
         biao[i]=biao[i-1]*3+sieve[i-1]*2;
         sieve[i]=biao[i-1]+sieve[i-1];
     }
     while(~scanf("%d",&n)&&n!=-1)
     {
         if(n==0)
         printf("1, 0\n"); //????????????????
        else
      printf("%I64d, %I64d\n",biao[n],sieve[n]);
    }
   return 0;
 }