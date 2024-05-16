#include<stdio.h>
void main(){
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z'){
		printf("character is lowercase");
	}
	else if(ch>='A'&&ch<='Z'){
		printf("character is uppercase");
	}
	else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
		printf("character is operator");
	}
	else if(ch=='@'||ch=='#'||ch=='$'){
		printf("character is special character");
	}
	
    
	
	

}
