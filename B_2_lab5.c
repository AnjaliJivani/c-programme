#include<stdio.h>
void main(){
	int a;
	printf("enter a");
	scanf("%d",&a);
	if(a&1==0){
		printf("no is even");
	}
	else{
		printf("no is odd");
	}
}
