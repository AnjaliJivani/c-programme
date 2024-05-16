#include<stdio.h>
void main(){
	int x=1,y=1,n,i=1,ans=x;
	printf("in x^y enter x");
	scanf("%d",&x);
	printf("in x^y enter y");
	scanf("%d",&y);
	while(i<=y){
		ans=ans*x;
		//printf("%d^%d=%d",x,y,ans);
		i++;
		//printf("%d^%d=%d",x,y,ans);
	}
	printf("%d^%d=%d",x,y,ans);
}
