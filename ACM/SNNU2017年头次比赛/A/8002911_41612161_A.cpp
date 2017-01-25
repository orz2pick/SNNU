#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int N = 0;
	int i = 0;
	cin >> N;
	while(N > 0)
	{
		N--;
		i++;
		int a = 0;
		int b = 0;
		cin >> a >> b;
		int l = 0;
		int r = 0;
		while(a != b)
		{
			int temp = 0;
			if(a > b)
			{
				temp = a%b;
				if(temp == 0)
				{
					l += a/b-1;
					a = 1;
				}
				else
				{
					l += a/b;
					a = temp;
				}
			}
			else
			{
				temp = b%a;
				if(temp == 0)
				{
					r += b/a-1;
					b = 1;
				}
				else
				{
					r += b/a;
					b = temp;
				}
			}
		}
		cout << "Scenario #" << i << ":" << endl << l << " " << r << endl << endl;
	}
}
