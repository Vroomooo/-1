#include <stdlib.h>
#include<stdio.h>

int getmax(int* a,int n)
{
	int i,sum = 0,max = 0;
	if (a==NULL||n<0)
	{
		return 0;
	}
	for (i = 0; i<n; i++)
	{
		sum = sum+a[i];

		if (sum<a[i])
		{
			sum = a[i];
		}

		if (sum>max)
		{
			max = sum;
		}

	}
	return max;
}

int main()
{
	int i,n,max,a[100];
	scanf("%d",&n);
	for (i = 0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	max = getmax(a,n);
	printf("%d",max);
	return 0;
}
