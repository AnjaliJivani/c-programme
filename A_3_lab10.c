#include<stdio.h>
void main(){
	int a,b,n,i=1,ans,factors,count=0;
	printf("enter number\t");//number is n;
	scanf("%d",&n);
	printf("factor of %d is\t",n);
	while(i<=n){
		if(n%i==0){
			//printf("factor of %d is %d\n",n,i);
			printf("%d, ",i);
			count=count+1;
		}
		i++;
	}
	printf("total number of factor is :%d\n",count);
	if(count<=2){
		printf("%d is prime number",n);	
	}
	else{
		printf("%d is not prime number",n);
	}
}
