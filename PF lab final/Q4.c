#include <stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("names.txt","r");
	int a,b;
	int c=40;
	char array[500];
	float per;
	if(ptr==NULL){
	printf("File does not open");
	}
	else {

	while(!feof(ptr)){

	char a=fgetc(ptr);
	printf("%c",a);
	if(a=='T'){
	a=c+2;}
	else if(a=='F'){
	b=c-1;}
	
	else if(a=='\n'){
	
	per=((b*100)/40);
	printf("Percentage of student=%f\n",per);

}
	}
	fclose(ptr);
}
}

