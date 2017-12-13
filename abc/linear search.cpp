#include<stdio.h>
int main()
{
	int a[1000],i,n,k,m,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			printf("element is found at position %d",i+1);
			f=1;
			break;
		}
	}
	if(f==0)
	printf("element is not found");
	
}
