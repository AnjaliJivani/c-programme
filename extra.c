#include<stdio.h>
void main(){
	int a,b;
	a=3;
	b=5;
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
}
