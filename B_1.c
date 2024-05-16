#include<stdio.h>
void main(){
	float height,base,y,area;
	printf("enter the value of height\n");
	scanf("%f",&height);
	printf("enter the value of base\n");
	scanf("%f",&base);
	area=height*base*0.5;
	
	printf("area of triangle:%f",area);	
}
