#include<stdio.h>
main(){
	int f=1,*p,n,i;
	printf("enter the number to find the factorial of");
	scanf("%d",&n);
	p=&n;
	for(i=1;i<=*p;i++){
		f=i*f;
	}
	printf("factorial=%d",f);
}
