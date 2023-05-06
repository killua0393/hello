#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],i,j,n,m,r1,c1,r2,c2,k;
	printf("enter the no. of rows and colum of matrix");
	scanf("%d %d",&r1,&c1);
	printf("enter the elements of matrix A");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);}}
	 for(i=0;i<r1;i++){
		 for(j=0;j<c1;j++){
			 printf("%d",a[i][j]);}
		 printf("\n");}
	 printf("enter the rows and columns of matrix b");
	 scanf("%d %d",&r2,&c2);
	 printf("enter the elements of matrix b");
	 for(i=0;i<r2;i++){
		 for(j=0;j<c2;j++){
			  scanf(" %d",&b[i][j]);}
	 }
	 for(i=0;i<r2;i++){
		  for(j=0;j<c2;j++){
			  printf("%d",b[i][j]);}
		  printf("\n");}
	 for(i=0;i<r1;i++){
		 for(j=0;j<c2;j++){
			 for(k=0;k<c1;k++){
				 c[i][j]=a[i][k]*b[k][j];}}}
	 for(i=0;i<r1;i++){
		 for(j=0;j<c2;j++){
			 printf("%d",c[i][j]);}
		 printf("\n");}}
