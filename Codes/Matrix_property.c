#include <stdio.h>
int main()
{
	int A[3][4],B[3][4],C[3][4],D[3][4];
	int count=0;
	printf("Enter the elements in 1st matrix:\n");
	for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
	scanf("%d",&A[i][j]);
	}
	}
	printf("Enter the elements in 2nd matrix:\n");
	for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
	scanf("%d",&B[i][j]);
	}
	}
	
	printf("\nMatrix C \n");
	for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
	C[i][j]=(3*(A[i][j]+B[i][j]));
	printf(" %d",C[i][j]);
	if(j==3){
	printf("\n");}
	}
	}
	
	printf("\nMatrix D\n");
	for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
	D[i][j]=((3*A[i][j])+(3*B[i][j]));
	printf(" %d",D[i][j]);
	if(j==3){
	printf("\n");
	}
	}
	}
	
	for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
	if(C[i][j]==D[i][j]){
	count++;
	}
	}
	}
	
	if(count==12){
	printf("Additive property satisfys");
	}
	else {
	printf("Additive property does not satisfys");
	}
	
}

	
