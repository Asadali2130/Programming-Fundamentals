#include <stdio.h>
int main()
{
	FILE* ptr;
	ptr=fopen("package.txt","r");
	
	char length;
	int count=0;
	

	if(ptr==NULL){
	printf("File does not open");
	}
	else {
	while((length=fgetc(ptr))!=EOF){
	if(length!='\n'){
	printf("%c",length);
	count++;
	}
	if(length=='\n'){
	printf("Length=%d\n",count);
	}
	}
	fclose(ptr);

}
}
