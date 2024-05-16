#include<stdio.h>
void main(){
	float p,r,t,i;
	printf("enter the value of principal");
	scanf("%f",&p);
	printf("enter the value of roi");
	scanf("%f",&r);
	printf("enter the value of time-period");
	scanf("%f",&t);
	i=p*r*t/100;
	printf("simple-interest:%f",i);

}
