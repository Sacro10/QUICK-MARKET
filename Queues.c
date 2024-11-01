#include <stdio.h>
#include <stdlib.h>
#define N 20
int Queue[N];
int QueueIsEmpty(int head,int end){
	if(head>end){
		return 1;
	}
	else{
		return 0;
	}
}
int QueueIsFull(int end){
	if(end==N){
		return 1;
	}
	else{
		return 0;
	}
}
void Enqueue(int Queue[N],int x,int end){
	if(QueueIsFull(end)==1){
		printf("Queue is full");
	}
	else{
		end++;
		Queue[end]=x;
	}
}
int Dequeue(int Queue[N],int head,int end){
	if(QueueIsEmpty(head,end)==1){
		printf("Queue is empty");S
	}
	else{
		head++;
		return Queue[head-1];
	}
}
int main() {
	int x,n, head=0,end=-1;
	n=Dequeue(Queue,head,end);
	return 0;
}
