#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std ;
int array[510];
int main()
{
	int m ;
	cin >> m ;
	while( m--)
	{
		int n ;
		cin >> n ;
		for( int i = 1 ; i <= n ; i++)
			cin >> array[i] ;
		sort(array+1,array+n+1);
		int mid = ( n % 2 == 1 ) ? (n/2+1) : (n/2);
		int ans = 0 ;
		for( int i = 1 ; i <= n ; i++)
		{
			ans+= abs( array[i] - array[mid] );
		}
		cout << ans << endl ;
	}
	return 0 ; 
 } 