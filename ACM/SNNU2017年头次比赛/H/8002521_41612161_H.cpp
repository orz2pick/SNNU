#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int N = 0;
	cin >> N;
	while(N > 0)
	{
		N--;
		int n = 0;
		int array[510];
		cin >> n;
		memset(array,0,sizeof(array));
		for(int i = 0;i < n;i++)
		{
			cin >> array[i];
		}
		sort(array,array+n);
		int sum = 0;
		for(int i = 0;i < n;i++)
		{
			sum += abs(array[i] - array[n/2]);
		}
		cout << sum << endl;
	}
}
