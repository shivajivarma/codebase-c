/*
Program to count number of characters, words and lines in a given file.
*/
#include <stdio.h>
#include <ctype.h>
#include "count-everything.h"

int main(int argc, char **argv){
	FILE *f;
	char ch;
	char *fileName;
	int character=0, line=0,word=0;
	
	printf("ENTER FILE NAME : ");
    scanf("%s", fileName);
	printf("FILE NAME: %s \n",fileName);
	
	f=fopen(fileName,"r");
	
	countEverything(f);
	
	fclose(f);
	
	return 1;
}
