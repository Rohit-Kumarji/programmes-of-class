#include<stdio.h>
int rbinsearch(int a[],int l,int h,int p)
{
	int m;
		if(l<=h)
		{
		m=(l+h)/2;
		if(a[m]==p)
		return m;
		
		 else if(a[m]<p)
		return rbinsearch(a,m+1,h,p);
		else if(a[m]>p)
		return rbinsearch(a,l,m-1,p);
	}
		else
		return -1;
	}
	int main()
	{
		int a[1000],i,n,p,c;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		scanf("%d",&p);
		c=rbinsearch(a,0,n-1,p);
		if(c==-1)
		printf("not found");
		else
		printf("element found at position %d",c);
	}
