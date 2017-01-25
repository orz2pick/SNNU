#include<iostream>
long long array[35];
long long array1[35];
using namespace std;
int main()
{
	
	long long a = 1;
	long long b = 0;
	array[0] = 1;
	array1[0] = 0;
	for(int i = 1;i <= 33;i++) 
	{
		long long temp = a;
		long long temp1 = b;
		a += temp*2+temp1*2;
		b += temp;
		array[i] = a;
		array1[i] = b;
	}
	int sec = 0;
	while(cin >> sec)
	{
		if(sec != -1)
		cout << array[sec] << ", " << array1[sec] << endl;
		else return 0;
	 } 
}
