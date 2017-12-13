#include<stdio.h>
int main()
{
	int a[1000],c[10000],b[10000],n,k=0,m,i,j;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	i=0;
	j=0;
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		{
		c[k]=a[i];
		i++;
	    }
	    else
	    {
	    	c[k]=b[j];
	    	j++;
		}
		k++;
	}
	if(i>(n-1))
	{
		while(j<m)
		{
		c[k]=b[j];
		j++;
		k++;
	    }
	}
	if(j>(m-1))
	{
		while(i<n)
		{
			c[k]=a[i];
			k++;
			i++;
		}
	}
	for(k=0;k<n+m;k++)
	printf(" %d",c[k]);
}
