#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int i,k,j,a[100000],s=0;
	scanf("%d",&i);
	while(i--)
	{
		scanf("%d",&j);
	    for(k=0;k<j;k++)
	    scanf("%d",&a[k]);
	    sort(a,a+j);
	    int t=(j)/2;
	    for(int m=0;m<j;m++)
	    if(a[m]<a[t])
	    s+=a[t]-a[m];
	    else
	    s+=a[m]-a[t];
	    printf("%d\n",s);
		s=0;
	}
	return 0;
}