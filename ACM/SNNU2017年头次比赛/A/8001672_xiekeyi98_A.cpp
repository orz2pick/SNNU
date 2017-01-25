#include<iostream>
#include<cstdio>

using namespace std;
namespace miao
{
	int left , right ;
}

void gcd( int a , int b )
{
	if(a == 0 && b == 0 )
		return;
	if(a > b )
		{
			if(a % b == 0 )
				{
					miao::left+=a/b - 1;
					gcd(1,b);
				}
			else
				{
					miao::left+=a/b;
					gcd(a%b,b);
				}
		}
	if(a < b )
		{
			if(b % a == 0 )
				{
					miao::right+=b/a-1;
					gcd(a,1);
				}
			else
				{
					miao::right+=b/a;
					gcd(a,b%a);
				}
		}
}



int main()
{
	int t;
	cin >> t ;
	int cas = 1 ;
	while(t--)
		{
			int i , j ;
			cin>> i >> j ;
			miao::left=0,miao::right=0;
			gcd(i,j);
			printf("Scenario #%d:\n",cas++);
			cout<< miao::left <<' '<< miao::right << endl << endl  ;
		}

}