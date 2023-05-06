#include<stdio.h>
int main(){
	int arr[100],*ptr,i,n;
	printf("enter the size of the array");
	scanf("%d",&n);
	ptr=arr;
	for(i=0;i<n;i++){
		scanf("%d ",&*ptr);
		ptr++;}
	ptr=arr;
	for(i=0;i<n;i++){
		printf("%d %p",*ptr,ptr);
		printf("\n");
		ptr++;}
}
	


