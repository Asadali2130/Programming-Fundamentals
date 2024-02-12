#include <stdio.h>
int main()
{
	int array[10];
	int max,min,se_max,se_min;
	
	printf("Enter the elementsin the array:\n");
	for(int i=0;i<10;i++){
	scanf("%d",&array[i]);
	}
	max=array[0];
	min=array[0];
	
	
	for(int i=0;i<10;i++){
	if(array[i]>max){
	se_max=max;
	max=array[i];
	}
	else if(array[i]!=max && (array[i]>se_max || i==1)){
	se_max=array[i];
	}
	}
	
	for(int i=0;i<10;i++){
	if(array[i]<min){
	se_min=min;
	min=array[i];
	}
	else if(array[i]!=min && (array[i]<se_min || i==1)){
	se_min=array[i];
	}
	}
	
	
	printf("Second maximum=%d\nSecond minimum=%d\n",se_max,se_min);
}
