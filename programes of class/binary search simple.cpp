#include<stdio.h>
int main()
{
	int a[10000],n,i,f=0,l,k,m,c,h;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&k);
	l=0;
	h=n-1;
	while(l<=h)
	{
		m=(l+h)/2;
		if(a[m]==k)
		{
			c=m;
			f=1;
			break;
		}
		if(a[m]<k)
		{
		l=m+1;
	}
		else if(a[m]>k)
		h=m-1;
	}
	if(f==0)
	printf("element is not found");
	else
	printf(" %d is first found at %d position",k,c+1);
}
