#include<stdio.h>
int main()
{
	int a[100],i,j,n,x,pos;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the position and value of the element");
	scanf("%d %d",&pos,&x);
	for(i=n-1;i>=pos;i--){
		a[i+1]=a[i];
	}
	a[pos]=x;
	for(i=0;i<n+1;i++){
		printf("%d \t",a[i]);}}
