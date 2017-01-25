#include<stdio.h>
#include <iostream>
using namespace std;
int main()
{
 long long  gao[40],di[40];
 int i,n;
 gao[0]=1;
 di[0]=0;
 for(i=1;i<39;i++)
 {
     gao[i]=gao[i-1]*3+di[i-1]*2;
     di[i]=gao[i-1]+di[i-1];
     //cout<<gao[i]<<", "<<di[i]<<endl;

 }
 while (cin>>n)
 {
     if (n==-1) return 0;

        cout<<gao[n]<<", "<<di[n]<<endl;

 }
 return 0;
}
