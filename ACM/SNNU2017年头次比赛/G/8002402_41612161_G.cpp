#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	long long array[10001];
	memset(array,0,sizeof(array));
	for(int i = 2,j = 4;i <= 10000;i++,j+=i*2-1)
	{
		if(!array[i])
		for(int k = j;k < 10000;k += i)
		array[k] = 1;
	}
	/*for(int i = 2;i < 10000;i++)
	{
		if(!array[i])
		cout << i << " ";
	}*/
	int num = 0;
	while(cin >> num)
	{
		if(num == 0)
		return 0;
		int sum = 0;
		int temp = num/2;
		for(int i = 2;i <= temp;i++)
		{
			int a = num-i;
			if(!array[i] && !array[a] && a!=i)
			{
				sum++;
			}
		}
		cout << sum <<endl;
	}
}
