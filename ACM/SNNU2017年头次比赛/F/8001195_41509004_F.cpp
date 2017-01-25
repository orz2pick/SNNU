#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <iostream>
using namespace std;
int main()
{
  int n;
  long long f[100]={0},g[100]={0};
  f[0]=1;g[0]=0;
  f[1]=3;g[1]=1;
  for(int i=2;i<=80;i++)
  {
    f[i]=f[i-1]*3+g[i-1]*2;
    g[i]=g[i-1]+f[i-1];
  }
  while(cin>>n)
  {
    if(n==-1)
    return 0;
    cout<<f[n]<<", "<<g[n]<<endl;
  }

  return 0;
}
