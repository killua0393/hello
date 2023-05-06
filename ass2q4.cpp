#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,*p,n,sum=0;
	printf("enter the size of integer");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("enter the eleemnt");
		scanf("%p",(p+i));
	}
	for(i=0;i<n;i++){
		printf("eleemnt");
		printf("%d \t",*(p+i));
	}
	for(i=0;i<n;i++){
		sum=(*p)+sum;
		p++;
	
	}
	printf("\n%d",sum);
}
