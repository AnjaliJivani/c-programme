#include<stdio.h>
void main(){
	float basicsalary,grosssalary,da,hra;
	printf("enter yor basicsalary");
	scanf("%f",&basicsalary);
	if(basicsalary>=10000&&basicsalary<20000){
		hra=0.2*basicsalary;
		da=0.8*basicsalary;
		printf("grosssalary :%f",hra+da+basicsalary);
	}
	else if(basicsalary>=20000&&basicsalary<30000){
		hra=0.25*basicsalary;
		da=0.90*basicsalary;
		printf("grosssalary :%f",hra+da+basicsalary);
	}
	else if(basicsalary>=30000){
		hra=0.3*basicsalary;
		da=0.95*basicsalary;
		printf("grosssalary :%f",hra+da+basicsalary);
	}
	}
//}
