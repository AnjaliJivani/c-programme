#include<stdio.h>
void main(){
	int a,b,i,n,sum=0,x;
	printf("enter last number");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		printf("%d, ",i);
		sum=sum+i;
	}
	printf("\n");
	printf("sum of series is :%d",sum);
}
