#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int prime[2000];
bool temp[10010];

void init()
{
	for( int i = 2 ; i <= 10000 ; i++)
		temp[i]=true;
	temp[1] = false ;
	int i = 2 ;
	while( i <= 10000 )
	{
		if( temp[i] == true )
		{
			int j = 2 ;
			while( i * j <= 10000 )
				temp[i*j] = false,j++;
		}
		i++;
	}
	
	int p = 1 ;
	for( int i = 2 ; i <= 10000 ; i++)
	{
		if( temp[i] == true) 
			prime[p++] = i;
	}
	return  ;
}

int main()
{
	init(); // ??????????????????
	int n ;
	while( cin >> n )
	{
		if( n == 0 )
			break ;
		int count = 0 ;
		for( int i = 1 ; i <= 1229 ; i++)
		{
			for( int j = i+1 ; j <= 1229 ; j++)
			{
				if( prime[i] +  prime[j]  == n )
					count++;
			}
		}
		cout << count << endl ;
		
	 } 
	 return 0 ; 

}