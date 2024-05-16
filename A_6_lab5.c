#include<stdio.h>
void main(){
	char ch;
	printf("enter the character\n");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		printf("character is vowel");
		
	}
	else{
		printf("character is consonant");
	}
}
