#include<stdio.h>
struct employees{
	char name[100];
	int empno;
	int salary;};
int main(){
	int n,i,j;
	struct employees emp[10],temp;
	printf("enter the no. of the employee");
	scanf("%d",&n);
	printf("enter the details of the employee");
	for(i=0;i<n;i++){
		printf("entere name");
		scanf("%s",emp[i].name);
		printf("enter employ number");
		scanf("%d",&emp[i].empno);
		printf("enter employ salary");
		scanf(" %d",&emp[i].salary);
		printf("\n");
	}
	for(i=0;i<n;i++){
		if(emp[i].salary>25000){
			printf("%s",emp[i].name);
			printf("%d",emp[i].empno);
			printf("%d",emp[i].salary);}}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(emp[i].salary>emp[j].salary){
				temp=emp[i];
				emp[i]=emp[j];
				emp[j]=temp;}}}
	for(i=0;i<n;i++){
		printf("name=%s",emp[i].name);
		printf("enter employno=%d",emp[i].empno);
		printf("enter employslaary=%d",emp[i].salary);
		printf("\n");}}
