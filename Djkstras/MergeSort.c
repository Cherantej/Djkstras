#include<stdio.h>
#include<conio.h>
mergesort(int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(low,mid);
		mergesort(mid+1,high);
		mergesort(low,mid,high);
	}
}
	mergesort(int low,int mid,int high)
	{
		int k,h=low,j=low,temp[20];
		while(h<=mid && j<=high)
		{
			if(a[h]<=a[j])
			{
				temp[i]=a[h];
				h++;
			}
			else
			{
				temp[i]=a[j];
				j++;
			}
			i++;
		}
	}
if(h>mid)
for(k=j;k<=high;i++,k++)
temp[i]=a[k];
else

