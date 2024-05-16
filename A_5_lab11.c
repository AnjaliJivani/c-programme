#include<stdio.h>
void main(){
	//factorial of given number;
	int a,b,n,i,ans=1;
	printf("enter number");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		ans=ans*i;
	}
	printf("factorial of %d is %d",a,ans);
}
