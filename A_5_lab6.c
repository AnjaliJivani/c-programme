#include<stdio.h>
void main(){
	int physics,chemistry,maths,english,computer;
	float per,sum;
	printf("enter the marks of physics\n");
	scanf("%d",&physics);
	printf("enter the marks of chemistry\n");
	scanf("%d",&chemistry);
	printf("enter the marks of maths\n");
	scanf("%d",&maths);
	printf("enter the marks of english\n");
	scanf("%d",&english);
	printf("enter the marks of computer\n");
	scanf("%d",&computer);
	sum=physics+chemistry+maths+english+computer;
	per=(sum*100)/500;
	printf("your percentage is:%f\n",per);
	if(per<35){
		printf("you are fail in this examination\n");
	}
	else if(per>=35&&per<45){
		printf("you are pass in this examination\n");
	}
	else if(per>=45&&per<60){
		printf("you are pass in this examination with second class\n");
	}
	else if(per>=60&&per<=70){
		printf("you are pass in this examination with first class\n");
	}
	else if(per>=70){
		printf("you are pass in this examination with distinction\n");
	}
}
