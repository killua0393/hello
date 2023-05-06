#include<stdio.h>
#include<stdlib.h>
#define N 5
int front=-1,rear=-1;
int q[N];
void enq(int item){
	if(rear==N-1){
		printf("queue overflow");}
	else if(front==-1){
		front++;
		rear++;
		q[front]=item;}
	else if(front==0){
		rear++;
		q[rear]=item;}}
int dq(){
	int item=q[front];
	if(rear==-1&&front==-1){
		printf("queue underflow");}
	else if(rear==front){
		front=-1;
		rear=-1;
	}
	else{
		front=front+1;
		return item;}
}
void is_full(){
	if(rear==N-1){
		printf("queue is full");}}
void is_empty(){
	if(rear==-1&&front==-1){
		printf("queue is empty");}
}
void display(){
	if(rear==-1&&front==-1)
		printf("queue is empty nothing to display");
	else{
		int i;
		printf("elements of the queue are");
		for(i=front;i<=rear;i++){
			printf("%d \t",q[i]);}}}
int main(){
	int choice,item;
	while(1){
	printf("user enter your choice");
	printf("\n 1.enter element in queue\n2.delete element in queue\n3.check queue is empty\n4.check queue is full\n5.display queue\n6.exit\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("enter element to push in stack");
			scanf("%d",&item);
			enq(item);
			break;
		case 2:
			dq();
			break;
		case 3:
			is_empty();
			break;
		case 4:
			is_full();
			break;
		case 5:
			display();
			break;
		case 6:
			exit(0);
			break;
		default:
			printf("invalid input");}
}}

