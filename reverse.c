#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "file_utils.h"

int main(int argc, char** argv){
	char* readfile = argv[1];
	char* writefile = argv[2];
	printf("Read file: %s\n",readfile);
	printf("write file: %s\n",writefile);	

	//get the size of the file
    struct stat st; 
    stat(readfile, &st);
    int size = st.st_size;
	
	printf("Read File size: %d\n",size);
    
    //reserve memory for file contents
    char* fileMem = (char*)malloc(size * sizeof(char));

	
	read_file(readfile, *fileMem);

	printf("!");
	//reverse
	//swap items, working inward until middle
	char temp;
	for(int i=0;i<(size/2);i++){
		temp = fileMem[i];
		fileMem[i] = fileMem[size - i - 1];
		fileMem[size - i - 1] = temp;
	}	

	write_file(writefile,fileMem,size);

}
