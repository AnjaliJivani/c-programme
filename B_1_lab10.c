#include<stdio.h>
void main(){
	int a,b,x,i=1,ans,sum=0,count;
	printf("enter number ");
	scanf("%d",&x);
	printf("factors of %d is :",x);
	
	while(i<=x){
		if(x%i==0){
			printf("%d ",i);
			sum=sum+i;
		}
		i++;
	}
	printf("\n");
	if(sum==x){
		printf("given number %d is perfect",x);
	}
	printf("given number %d is perfect",x);
	
}
