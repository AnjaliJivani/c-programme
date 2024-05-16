#include<stdio.h>
void main(){
	int a,b,n,i=1,ans=1;
	printf("enter number");
	scanf("%d",&a);
	while(i<=a){
		ans=ans*i;
		i++;
	}
	printf("factorial of %d is %d",a,ans);
}
