#include<stdio.h>
int main()
{
	int *p1,*p2,area,peri,l,b;
	printf("enter the length and breadth of a rectangle");
	scanf("%d %d",&l,&b);
	p1=&l;
	p2=&b;
	area=(*p1)*(*p2);
	peri=2*((*p1)+(*p2));
	printf("%d %d ",area,peri);
}
