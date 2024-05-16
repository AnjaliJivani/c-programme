#include<stdio.h>
void main(){
	int a,b,i,x,n,ans;
	printf("enter number");
	scanf("%d",&x);
	for(i=1;i<=10;x){
		ans=i*x;
		printf("%d*%d=%d\n",x,i,ans);
		i++;
	}
}
