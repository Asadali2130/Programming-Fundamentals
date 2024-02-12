#include <stdio.h>
int find_GCD_LCM(int num1,int num2);

int main()
{
	int num1,num2,a;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	
	a=find_GCD_LCM(num1,num2);
	
}
int find_GCD_LCM(int num1,int num2){
	int hcf=0,lcm;
	int b,remainder;
	
	while(num1!=0){
	b=(num1/num2);
	
	 remainder=num1-(num2*b);
	if(remainder=0){
	hcf=num2;
	break;}
	}
	lcm=((num1*num2)/hcf);
	printf("HCF=%d\nLCM=%d\n",hcf,lcm);
}
