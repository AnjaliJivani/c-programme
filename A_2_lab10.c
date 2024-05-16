#include<stdio.h>
void main(){
	int n,i=1,a,b,ans,average=0,sum=0,x;
	printf("enter the number of digits you want to enter  ");
	scanf("%d",&a);
	while(i<=a){
		printf("enter number ");
		scanf("%d",&x);
		sum=sum+x;
		i++;
	}
	printf("sum of numbers :%d\n",sum);
	average=sum/a;
	printf("average of numbers :%d",average);
}
