#include<stdio.h>
void main(){
	int a,b,x=1,y=1,i,n,ans=x;
	printf("in x^y enter x");
	scanf("%d",&x);
	printf("in x^y enter y");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		ans=ans*x;
		
	}
	printf("%d^%d=%d",x,y,ans);
	
}
