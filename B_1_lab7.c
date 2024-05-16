#include<stdio.h>
void main(){
	int a,b,c,ans,m;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	printf("enter c");
	scanf("%d",&c);
	if(a>b){
		m=a*c;
		printf("largest from a and b:%d",a);
		printf("multiplication of largest and c is:%d",m);
	}
	else {
		m=b*c;
		printf("largest from a and b:%d",b);
		printf("multiplication of largest and c is:%d",m);
	}
	
	
	
	
	}
