#include<stdio.h>
void main(){
	int a;
	printf("enter the number of month");
	scanf("%d",&a);
	switch(a){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("days of month are 31");
			break;
		case 2:
			printf("days of month are 28");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
		printf("days of month are 30");
		break;	
					
	}
}
