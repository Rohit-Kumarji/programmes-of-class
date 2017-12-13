#include<stdio.h>
void quicksort(int a[],int low,int high);
int partition(int a[],int low,int high);
int main()
{
	int n,a[10000],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int j;
		j=partition(a,low,high);
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
	}
}
int partition(int a[],int low,int high)
{
	int pivot,i,t,j;
	pivot=a[low];
	i=low+1;
	j=high;
	while(i<j)
	{
		while(pivot>=a[i])
		i++;
		while(pivot<a[j])
		j--;
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		i--;
		j--;
		}
	}
	a[low]=a[j];
	a[j]=pivot;
	
	return(j);
	
}
