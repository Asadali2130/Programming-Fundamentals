#include <stdio.h>
#include <math.h>
int multiply(int n);//function declaration
int main()
{
	int n,a;
	printf("Enter the number :");
	scanf("%d",&n);
	
	a=multiply(n);//function calling
	printf("Number=%d",a);
	
}
int multiply(int n){
	int b=n;
	int digit=0,number;
	while(n!=0){
	int a=n%10;
	n=n/10;
	digit++;
	}
	printf("%d",digit);
	
	number=pow(5,digit);
	return number*b;
}
