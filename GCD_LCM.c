#include <stdio.h>
int find_GCD_LCM(int *num1,int *num2);

int main()
{
	int n1,n2,call;
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	
	call=find_GCD_LCM(&n1,&n2);
	printf("GCD=%d\nLCM=%d\n",n1,n2);
}

int find_GCD_LCM(int *num1,int *num2){
	int a=*num1,b=*num2,c=1;
	int d=*num1;
	
	while(c!=0){
	
	int c=a/b;
	int remainder=a-(b*c);
	if(remainder==0){
	
	*num1=b;
	*num2=(d* *num2)/b;
	break;
	}
	a=b;
	b=remainder;
}
}
