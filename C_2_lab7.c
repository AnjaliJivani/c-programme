#include<stdio.h>
void main(){
	int month,year,d;
	printf("enter month");
	scanf("%d",&month);
	printf("enter year");
	scanf("%d",&year);
	switch(month){
		case 1:
				printf("days of month are 31");
			break;
		case 3:
				printf("days of month are 31");
			break;
		case 5:
				printf("days of month are 31");
			break;
		case 7:
				printf("days of month are 31");
			break;
		case 8:
				printf("days of month are 31");
			break;
		case 10:
				printf("days of month are 31");
			break;
		case 12:
			printf("days of month are 31");
			break;
		case 4:
			printf("days of month are 30");
		break;
		case 6:
			printf("days of month are 30");
		break;
		case 9:
			printf("days of month are 30");
		break;
		case 11:
		printf("days of month are 30");
		break;
		case 2:
			if((year%4==0&&year%100!=0)||(year%400==0)){
				printf("days of month are 29");
			}
			else {
				printf("days of month are 28");
			}
			break;
			default:
				printf("enter valid month or year");
				break;
			}
}
