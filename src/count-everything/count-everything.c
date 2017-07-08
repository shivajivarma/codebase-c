#include<stdio.h>
#include<ctype.h>

void countEverything(FILE *file){
	
	char ch;
	int character=0, line=0,word=0;
	
	if(file==NULL){
		printf("404: FILE NOT FOUND\n");
		printf("HINT: PASS VALID FILENAME AS ARGUMENT TO THE PROGRAM\n");
	} else {
		while((ch=getc(file))!=EOF){
			character++;
			if(ch=='\n') {
				line++;
			}
			if(isspace(ch) || ch=='\t' || ch=='\n'){
				word++;
			}
		}
		putchar('\n');
		printf("no of line=%d\n",line);
		printf("no of word=%d\n",word);
		printf("no of character=%d\n",character);
	}

}