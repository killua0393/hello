#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n,x,m;
	printf("enter the no. of elements in an array");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("enter the elements");
		scanf("%d",(p+i));
		
	}
	printf("enter element to search");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(*(p+i)==x){
			m=*(p+i);
			break;
		}
		else{
			m=0;
		}
	}
	if(m==0){
		printf("element not found");}
	else{
		printf("element found=%d",m);
	}
	
	}
