#include<stdio.h>
void main(){
	int a,i,n;
	printf("enter last digit 1....n  so in this case enter n\t");
	scanf("%d",&n);
	while(i<=n){
		if(i%2!=0){
			printf("%d ",i);
		}
		
		i++;
	}
}
