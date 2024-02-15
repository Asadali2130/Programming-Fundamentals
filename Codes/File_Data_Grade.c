#include <stdio.h>
int main()
{
	FILE* ptr;
	ptr=fopen("history.txt","r");
	char a;
	int marks=0;
	if(ptr==NULL){
	printf("File does not open");
	}
	else {
	
	while(a=fgetc(ptr)){
	
	printf("%c",a);
	while(a!='\n'){
	if(a=='T'){
	marks+2;
	}
	else if(a=='F'){
	marks--;
	}
	else {
	marks+0;
	}
	}
	
	a=fgetc(ptr);

	float per=marks*0.4;
	if(per>=90 && per<=100){
	printf("A grade");}
	else if(per>=80 && per<90){
	printf("B grade");
	}
	else if(per>=70 && per<80){
	printf("C grade");
	}
	else if(per>=60 && per<70){
	printf("D grade");
	}
	else {
	printf("F gradde");
	}
}
}
	fclose(ptr);
}
