#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,*p,n,sum=0,j,x;
	printf("enter the no.of elements");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("enter a number");
		scanf("%d",(p+i));}
	for(i=0;i<n;i++){
	printf("%d ",*(p+i));}
	printf("enter the elment to search");
	scanf("%d",&x);

	for(i=0;i<n;i++){
		if(*(p+i)==x){
			printf("element found");}}}


	
