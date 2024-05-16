#include<stdio.h>
#include<math.h>
void main(){
	float a,b,c,ans;
	char operator;
	printf("enter the value of a");
	scanf("%f",&a);
	printf("enter the value of b");
	scanf("%f",&b);
	printf("enter + for addition\n");
	printf("enter - for substraction\n");
	printf("enter * for multiplication\n");
	printf("enter / for division\n");
	scanf("%c ",&operator);
//	if(operator=='+'){
//		ans=a+b;
//	printf("%f",ans);	
//	}
//	else if(operator=='-'){
//		ans=a-b;
//	printf("%f",ans);
//	}
//}
	switch(operator){
		case'+':
			ans=a+b;
		    printf("addition:%f",ans);
		    break;
		case'-':
			ans=a-b;
		    printf("substraction:%f",ans);
		    break;
		case'*':
			ans=a*b;
			printf("multiplication:%f",ans);
			break;
		case'/':
			ans=a/b;
			printf("division :%f",ans);
			break;
		default:
			printf("enter valid operator");
			break;
		
		}
		
	}
