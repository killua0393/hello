#include<stdio.h>
void read_triplet(int r,int t[][3]);
void create_sparse(int t[10][3],int s[10][t[0][1]]);
void display_sparse(int r,int c,int s[r][c]);
main(){
	int r,t[10][3];
	printf("enter rows of  triplet matrix or no. of non zero elemnts");
	scanf("%d",&r);
	read_triplet(r,t);
	int c=t[0][1];
	r=t[0][0];
	int s[t[0][0]][t[0][1]];
	create_sparse(t,s);
	
	display_sparse(r,c,s);}


void read_triplet(int r,int t[10][3]){
	int i,j;
	for(i=0;i<r+1;i++){
		for(j=0;j<3;j++){
			scanf("%d",&t[i][j]);}}}
void create_sparse(int t[10][3],int s[][t[0][1]]){
	int i,j;
	for(i=0;i<t[0][0];i++){
		for(j=0;j<t[0][1];j++)
			s[i][j]=0;}
	for(i=1;i<(t[0][2]+1);i++){
	       s[t[i][0]][t[i][1]]=t[i][2];}
}
	       	       


void display_sparse(int r,int c,int s[r][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",s[i][j]);
		}
		printf("\n");
	}}
