#include<stdio.h>
void main(){
	int a,b,i=0,n,oddcount=0,evencount=0;
	while(i<10){
		printf("enter number");
		scanf("%d",&n);
		i++;
		if(n%2!=0){
			oddcount=oddcount+1;
		}
		else{
			evencount=evencount+1;
		}
//	printf("odd count :%d\n",oddcount);
//	printf("even count :%d",evencount);
	}
	printf("odd count :%d\n",oddcount);
	printf("even count :%d",evencount);
	
}
