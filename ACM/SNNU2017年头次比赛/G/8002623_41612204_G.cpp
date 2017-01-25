#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,k,a[10000],m=0,s,l,x,t,n;
   	for (i=1;i<=10000;i++)
	  {
	  	k=sqrt(i);
	  	for (s=2;s<=k;s++)
	  	 if(i%s==0) break;
	  	 if (s==k+1)
	  	  {
	  	  	a[m]=i;
            m++;
		}
	}

	while(scanf("%d",&i))
	{
	if(i<=0)
	break;
      for(t=1;t<1229;t++)
	    for(n=t+1;n<1230;n++)
	       if(a[t]+a[n]==i)
	       {
	         x++;
	       }
	  printf("%d\n",x);
	  x=0;
    }
	  return 0;
	  	  	
}