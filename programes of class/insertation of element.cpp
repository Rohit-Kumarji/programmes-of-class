#include<stdio.h>
int main()
{
	int n,i,a[1000],p,t,v;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d %d",&p,&v);
	for(i=n-1;i>=p-1;i--)
	{
		
		a[i+1]=a[i];
		
	}
	a[p-1]=v;
	for(i=0;i<=n;i++)
	printf(" %d",a[i]);
}
