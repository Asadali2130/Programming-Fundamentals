#include <stdio.h>
int main()
{
	int m,n,ele;
	int sum=0, a=0;
	printf("Enter rows and columns:");
	scanf("%d %d",&m,&n);
	int array[m][n];
	
	printf("Enter the elements:");
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	scanf("%d",&array[i][j]);
	}
	}
	
	if(m==n){
	for(int count=n-1;count>=0;count--){
	int e=array[a][count];
	if(a==count){
	ele=array[a][count];
	printf("Skipped element=%d\n",ele);
	
	}
	a++;
	}
	}
	
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	if(array[i][j]==ele){
	continue;}
	sum=sum+array[i][j];
	
	}
	}
	printf("Sum=%d\n",sum);
}
	
	
