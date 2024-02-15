#include <stdio.h>
int main()
{
	int n,target,a,b,count,BA=0;
	printf("Enter the target:");
	scanf("%d",&target);
	
	printf("Enter the number of terms in array:");
	scanf("%d",&n);
	int array[n];
	printf("Enter the elements:");
	for(int i=0;i<n;i++){
	scanf("%d",&array[i]);
	}
	
	
	for(int i=0;i<n;i++){
	for(int j=1;j<n;j++){
	if(i!=j){
	if(target==array[i]+array[j]){
	BA++;
	a=i;
	b=j;
	printf("OUTPUT:[%d %d]",a,b);
	break;
	}
	
	}
	}
	}
	
	if(BA==0){
	printf("Target not found");
	}
	
}
