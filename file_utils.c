#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>


int read_file(char* filename, char **buffer){
	
	//open file
	FILE *fp;
	fp = fopen(filename,"r");
	
	//does it exist?
	if(fp  == NULL){
		fprintf(stderr, "*FILE ERROR*\n");
		return 1;
	}

	//thanks https://www.tutorialspoint.com/c_standard_library/c_function_fread.htm | 9/18/18
	fread(buffer,sizeof(char),1,fp);
	
	return 0;
}


int write_file(char* filename, char *buffer, int size){
	FILE *fp;
	fp = fopen(filename,"w");

	if(fp == NULL){
		fprintf(stderr, "*FILE ERROR*\n");
       	return 1;
	}

	for(int i=0;i<size;i++){

	}


	return 0;
}
