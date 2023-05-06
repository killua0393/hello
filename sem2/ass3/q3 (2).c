#include<stdio.h>
void read_sparse(int r,int c,int s[10][10]);
void display_triplet(int t[10][3]);
void create_triplet(int r,int c,int sparse[10][10],int triplet[10][3]);
int main()
{
	int sparse[10][10],triplet[10][3],k=1,m=0;
	int i,j,r,c;
	printf("enter the dimensions of sparse matrix");
	scanf("%d %d",&r,&c);
	read_sparse(r,c,sparse);
	//printf("the sparse matrix is");
	/**for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",sparse[i][j]);
		}
		printf("\n");}**/
	create_triplet(r,c,sparse,triplet);
	display_triplet(triplet);}
	void read_sparse(int r,int c,int s[10][10]){
			int i,j;
			for(i=0;i<r;i++){for(j=0;j<c;j++){scanf("%d",&s[i][j]);}}}
	void create_triplet(int r,int c,int sparse[10][10],int triplet[10][3]){
		int k=1,m=0,i,j;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(sparse[i][j]!=0){
					triplet[k][0]=i;
					triplet[k][1]=j;
					triplet[k][2]=sparse[i][j];
					k++;m++;}}}
		triplet[0][0]=r;
		triplet[0][1]=c;
		triplet[0][2]=m;}
	void display_triplet(int t[10][3]){
		int i,j;
		for(i=0;i<t[0][2]+1;i++){
			 for(j=0;j<3;j++){printf("%d",t[i][j]);}}
		printf("\n");}






