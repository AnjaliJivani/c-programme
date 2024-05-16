#include<stdio.h>
void main(){
	float seconds,minutes,hours;
	printf("enter seconds");
	scanf("%f",&seconds);
	minutes=seconds/60;
	hours=seconds/3600;
	printf("HH:MM:SS %f %f %f",hours,minutes,seconds);
}
