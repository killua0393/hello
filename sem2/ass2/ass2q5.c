#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,*p,n,sum=0,j,m;
	printf("enter the no.of elements");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("enter a number");
		scanf("%d",(p+i));}
	for(i=0;i<n;i++){
	printf("%d ",*(p+i));}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(p+i)>*(p+j)){
				m=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=m;}}}
	for(i=0;i<n;i++){
		printf("%d",*(p+i));}}


	
