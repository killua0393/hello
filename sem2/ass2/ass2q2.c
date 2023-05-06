#include<stdio.h>
int main(){
	int n,*ptr,fact=1,i;
	printf("enter the number to find the factorial of the number");
	scanf("%d",&n);
	ptr=&n;
	for(i=*ptr;i>=1;i--){
		fact=fact*i;}
	printf("%d ",fact);}


