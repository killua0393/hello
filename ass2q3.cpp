#include<stdio.h>
int main()
{
	int arr[100],i,*p,n;
	printf("enter the size of an array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	p=arr;
	for(i=0;i<n;i++){
		printf("ele=%d ,address=%p \t",*p,p);
		p++;
	}
}
