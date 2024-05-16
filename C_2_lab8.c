#include<stdio.h>
void main(){
	int i,n,ans,a,b,sum=0;
	printf("enter last integer");
	scanf("%d",&a);
	while(i<=a){
		ans=i*i;
		sum=ans+sum;
//		printf("sum of series is:%d",sum);
		i++;
	}
	printf("sum of series is:%d",sum);
}
