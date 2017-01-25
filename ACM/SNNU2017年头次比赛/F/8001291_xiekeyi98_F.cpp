#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int n ;
	while( cin >> n )
		{
			long long int h = 1 ;
			long long int l = 0 ;
			if( n == -1 )
				break ;
			for( int i = 1 ; i <= n ; i++)
				{
					long long int temp = h ;
					h = 3*h + 2 * l ;
					l = 1*temp + 1*l ;
				}
			cout << h << ", " << l << endl ;
		}
	return 0 ;
}