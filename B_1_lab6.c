#include<stdio.h>
void main(){
	float units,charges,totalbill,a,b,c,d,bill;
	printf("enter your electricity units");
	scanf("%f",&units);
	if(units<=50){
		bill=units*0.50;
		
	}
	else if(units<=150){
		bill=(units-50)*0.75 + (50*0.50);
	}
	else if(units<=250){
		bill=(units-150)*1.20 + (50*0.50)+ (100*0.75);
	}
	else if(units<=500){
		bill=(units-250)*1.50 + (50*0.50)+ (100*0.75) + (100*1.20);
	}
	printf("totalbill with surcharges is :");
	printf("%f",bill*0.20);
	
	
	
	
	
	}
