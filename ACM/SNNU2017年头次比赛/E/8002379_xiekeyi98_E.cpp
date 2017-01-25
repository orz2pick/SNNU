#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std ;
char s[1000010];
int dif[30];
int main()
{
	int t ;
	//cin >> t ;
	scanf("%d",&t);
	while( t-- )
		{
			memset(dif,0,sizeof(dif) ) ;
			int k ;
			long long int ans = 0 ;
			//cin >> s >> k ;
			scanf("%s%d",s,&k);
			int len = strlen(s);
			int diff = 0;
			int r = 0;
			for( int i = 0; i < len ; i++)
				{
					while( diff < k && r < len)
						{
							dif[ s[r] - 'a' ]++;
							if( dif[ s[r] - 'a'] == 1) diff++;
							r++;
						}
					if( diff == k ) ans+= len - r + 1;
					dif[ s[i] - 'a' ]--;
					if( dif[ s[i] -'a' ] == 0 ) diff-- ;
				}
			//	cout << ans << endl ;
			printf("%lld\n",ans);
		}
	return 0 ;
}