#include<stdio.h>
void main(){
	int n,i,a,b,ans,firstdigit,lastdigit;
    printf("enter the number");
	scanf("%d",&n);
	//lastdigit;
	lastdigit=n%10;
	while(n>=10){
		n=n/10;
		
	}
		firstdigit=n;
		ans=lastdigit+firstdigit;
		printf("sum of first and last digit is :%d",ans);
}
