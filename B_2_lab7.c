#include<stdio.h>
void main(){
	char ch;
	printf("enter character\n");
	scanf("%c",&ch);
	(ch>='a'&&ch<='z')?printf("enter character is  alphabet"):printf("enter character is not alphabet");
}
