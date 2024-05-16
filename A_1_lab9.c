#include<stdio.h>
void main(){
	int a=0,b,i=1,n,ans,sum=0,oddsum=0,evensum=0;
	printf("enter last integer");
	scanf("%d",&a);
	while(i<=a){
		if(i%2==0){
			sum=sum-i;
		}
		else {
			sum=sum+i;
		}
//		sum=evensum+oddsum;
//		printf("series :%d",sum);
      i++;
	}
	//sum=evensum+oddsum;
		printf("series :%d",sum);
}
