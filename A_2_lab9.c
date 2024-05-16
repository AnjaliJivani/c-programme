#include<stdio.h>
void main(){
	int n,i=1,x,ans=1;
	printf("enter number");
	scanf("%d",&n);
	while(i<11){
		ans=n*i;
		printf("%d*%d=%d\n",n,i,ans);
		i++;
		
	}
}
