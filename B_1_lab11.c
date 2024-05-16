#include<stdio.h>
void printFibonacci(int n){

	int a,b,i,ans,first=0,second=1,next;
	printf("fibonacci series: ");
	for(i=0;i<n;++i){
		printf("%d, ",first);
		next=first+second;
		second=next;
	}
	
}
int main(){
	int n;
	printf("enter the number of terms: ");
	scanf("%d",&n);
	printFibonacci(n);
	return 0;
	
	
}

