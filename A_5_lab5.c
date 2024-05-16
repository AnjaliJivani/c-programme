#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	printf("enter c");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("largest no is:%d",a);
		}
		else{
			printf("largest no is:%d",c);
		}
	}
	else{
	
		if(b>c){
			printf("largest no is:%d",b);
		}
		else{
			printf("largest no is:%d",c);
		}
	}
}
