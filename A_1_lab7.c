#include<stdio.h>
void main(){
	int a,b=1;
	printf("enter a");
	scanf("%d",&a);
	
		//if(a%7==b){
	
        	switch(a){
		
		
	    	case 0:
			printf("sunday");
			break;
	    	case 1:
			printf("monday");
			break;
			case 2:
			printf("tuesday");
			break;
			case 3:
			printf("wednesday");
			break;
			case 4:
			printf("thursday");
			break;
			case 5:
			printf("friday");
			break;
			case 6:
			printf("saturday");
			break;
			default:
				printf("enter valid no");
				break;
    }
	//}
	//else{
//		printf("enter valid no.");
	}
//}
