#include<stdio.h>
void main(){
	float a,b,c,ans;
	char op;
	printf("enter the value of a\t");
	scanf("%f",&a);
	printf("enter the value of b\t");
	scanf("%f",&b);
	printf("enter + for addition \n enter - for substraction\n enter * for multiplication\n enter/ for division\n");
	scanf(" %c",&op);
	switch(op){
		case '+':
			ans=a+b;
			printf("addition :%f",ans);
			break;
			case '-':
				ans=a-b;
				printf("substraction :%f",ans);
				break;
				case'*':
				ans=a*b;
				printf("multiplication :%f",ans);
				break;
	     		case'/':
				ans=a/b;
				printf("division :%f",ans);
				break;
				
	
	default :
		printf("enter valid operator");
}
}
