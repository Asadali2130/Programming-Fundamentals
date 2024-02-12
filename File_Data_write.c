#include <stdio.h>
int main()
{
	FILE* ptr;
	ptr=fopen("names.txt","r+");
	
	char string[500];
	char string2[500];
	
	if(ptr==NULL){
	printf("File does not open ");}
	else{
	
	while(fgets(string,sizeof(string),ptr)){
	
	for(int i=0;i<4;i++){
	string2[i]=string[i];
	if(string2[i]=='\0'){
	string2[i]='\n';
	}
	}
	fputs(string2,ptr);
	
}
	fclose(ptr);
	printf("Data has wwritten successfully");}

}	
