#include <stdio.h>
int main()
{
	char option;
	int n=20,a,b,open[20],close[20];
	int num=0,count=0;
	printf("Enter 'Y' TO START:");
	scanf(" %c",&option);
	
	if(option=='Y'){
	
	for(int i=1;i<=20;i++){
	if(n%i==0){
	 a=n--;
	 open[count]=a;
	 count++;
	}
	else {
	 b=n++;
	 close[num]=b;
	 num++;
	if(i==20){
	printf("\nOpen lockers=%d Lock lockers=%d\n",n-a-1,n-b);
	}
	
}
}
	printf("\nOpen lockers are:\n");
	for(int i=0;i<n-a-1;i++){
	printf(" %d",open[i]);}
	printf("\nLock lockers are:\n");
	for(int i=0;i<n-b;i++){
	printf(" %d",close[i]);}
}
	else {
	printf("Enter valid option");
	}
}
