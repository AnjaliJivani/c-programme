#include<stdio.h>
void main(){
	int n,i,a,b,x;
	printf("enter x");
	scanf("%d",&x);
	for(i=1;i<=5;i++){
		for(n=1;n<=i;n++){
			printf("*");
		}
		printf("\n");
	}
}
