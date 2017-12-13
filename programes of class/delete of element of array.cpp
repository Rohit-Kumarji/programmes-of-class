#include<stdio.h>
int main()
{
	int n,i,a[1000],p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&p);
	for(i=p-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf(" %d",a[i]);
	}
}
