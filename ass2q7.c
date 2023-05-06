#include<stdio.h>
struct emp{
	char name[10];
	int empno;
	int salary;
	
};
main(){
	struct emp e[10],temp;
	int i,j,n;
	printf("number of employees");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("emplyee name \t ");
		scanf("%s",e[i].name);
		printf("employ number\t");
		scanf("%d",&e[i].empno);
		printf("enter salary\t");
		scanf("%d",&e[i].salary);
	}
	for(i=0;i<n;i++){
		if(e[i].salary>25000){
			printf("%s\t",e[i].name);
			printf("%d\t",e[i].empno);
			printf("%d\t",e[i].salary);
		
		}
		printf("\n");
		
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(e[i].salary>e[j].salary){
			
			temp=e[i];
			e[i]=e[j];
			e[j]=temp;}
			
		}
	}
	for(i=0;i<n;i++){
		printf("\nemplyee name");
		printf("%s\t",e[i].name);
		printf("employ number");
		printf("%d\t",e[i].empno);
		printf("enter salary");
		printf("%d\t",e[i].salary);
	}
		
	}

