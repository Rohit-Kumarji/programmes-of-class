#include<stdio.h>
void mergesort(int a[],int low,int high);
void merge(int a[],int low,int mid,int high);
int main()
{
  int n,a[100000],i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  mergesort(a,0,n-1);
  for(i=0;i<n;i++)
  printf("%d",a[i]);
	
}
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void merge(int a[],int low,int mid,int high)
{
	int i,j,c[10000],k,p;
	i=low;
	k=low;
	j=mid+1;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=a[j];
			j++;
		}
		k++;
	}
	if(j>high)
	{
		for(p=i;p<=mid;p++)
		{
		c[k]=a[p];
		k++;
	    }
	}
	else
	{
		for(p=j;p<=high;p++)
		{
			c[k]=a[p];
			k++;
		}
	}
	for(p=low;p<=high;p++)
	{
	a[p]=c[p];
    }
}


