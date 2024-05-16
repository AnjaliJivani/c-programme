#include<stdio.h>
void main(){
	int a,b,n,i=1,ans,factors;
	printf("enter number\t");//number is n;
	scanf("%d",&n);
	printf("factor of %d is\t",n);
	while(i<=n){
		if(n%i==0){
			//printf("factor of %d is %d\n",n,i);
			printf("%d, ",i);
		}
		i++;
		
		
	}
}
