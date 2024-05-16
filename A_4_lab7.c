#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	printf("enter c");
	scanf("%d",&c);
	
	int largest= (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("largest :%d",largest);
	 //(a>b)?((a>c)?printf(" largest :%d",c):printf(" largest :%d",a)):((b>c)?printf(" largest:%d",c):printf("largest:%d",b));
}
