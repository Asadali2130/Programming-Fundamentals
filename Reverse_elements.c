#include<stdio.h>
int reverse(int *ptr,int n);
int main()
{
	int n,a;
	printf("Enter the number of terms in array:");
	scanf("%d",&n);
	int array[n];
	
	printf("Enter the elements:");
	for(int i=0;i<n;i++){
	scanf("%d",&array[i]);
	}
	a=reverse(array,n);
}
int reverse(int *ptr,int n){
	int array2[n];
	
	for(int i=0;i<n;i++){
	array2[i]=*ptr;
	ptr++;
	}
	
	for(int i=0;i<n/2;i++){
	int temp=array2[n-1-i];
	array2[n-1-i]=array2[i];
	array2[i]=temp;
	}
	
	for(int i=0;i<n;i++){
	printf(" %d",array2[i]);
	}
}
