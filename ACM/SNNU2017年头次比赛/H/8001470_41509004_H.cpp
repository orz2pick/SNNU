#include<algorithm>
#include <iostream>
using namespace std;
int main()
{
 int n;
 int a[1001];
 int t;cin>>t;
 while (t--) {
   cin>>n;
   for(int i=0;i<n;i++)
    cin>>a[i];
   sort(a,a+n);
   int mi = n/2;int ans=0;
   for(int i=0;i<n;i++)
   ans = ans +abs(a[i]-a[mi]);
   cout<<ans<<endl;
 }
 return 0;
}
