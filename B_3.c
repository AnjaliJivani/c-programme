#include<stdio.h>
void main(){
	float fahrenheit,c;
	printf("enter the value of fahrenheit");
	scanf("%f",&fahrenheit);
	c=(((fahrenheit-32)*5)/9);
	printf("tempreture in celcious:%f",c);
}
