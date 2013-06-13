#include<stdio.h>

int a[]={1,2,2,2,5,6,8,9};

int binarysearch (int start, int end, int n)
{
	while (end>=start) {
		int mid=(start+end)/2,mid2;
		if (a[mid]==n)	{
			while (a[mid] == a[mid-1]) 
				mid--;
			return mid;
		}
		else if (a[mid]>n)
			end=mid-1;
		else 
			start=mid+1;
	}
	return -1;
}	

int main(void)
{
	printf("%d\n", binarysearch(0,7,2));	
	return 0;
}
