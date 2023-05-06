#include<Stdio.h>
int main()
{
	int a,*p1,*p2,peri,l,b;
	printf("enter length and breadth of rectangle");
	scanf("%d %d",&l,&b);
	p1=&l;
	p2=&b;
	a=(*p1)*(*p2);
	peri=2*(*p1+*p2);
	printf("area=%d,peri=%d",a,peri);
}
