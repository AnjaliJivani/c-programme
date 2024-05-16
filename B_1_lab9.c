#include<stdio.h>
void main(){
	char ch,ar;
	ch='a';
	ar='A';
	int i=1,n=1;
	while(i<27){
		printf("%c ",ch);
		i++;
		ch++;
	}
	printf("\n");
	while(n<27){
		printf("%c ",ar);
		n++;
		ar++;
	}
	
}
