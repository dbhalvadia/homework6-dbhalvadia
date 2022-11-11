#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char*argv[])
{
        int i, n;
        //create 16 kbyte buffer uding char array
        char buffer[16*1024];
        //create a int variable for file descriptor
        int fd;
        //check if argc < 2, print error and exit
        if(argc < 2)
        {
                printf("Usage: ./aout filename \n");
                return -1;
        }
      //read filename entered as command line
        fd = open(argv[1], 0_RDONLY);
        if(fd < 0)
        {
                printf("Cannot open file for writing\n");
                return -2;
        }
        //read entire content of file
        if(n = read(fd, buffer, fizeof(buffer))) < 0);
        {
                printf("Error reading file\n");
                return -2;
        }
        buffer[n] = '\0';
        //close file
        close(fd);
	//go through each char in buffer and find single line comment
	
	//single line comment starts w //
	for(i = 0; i < n; i++)
	{
	//continue until /n
	if(buffer[i]!='\n')
		continue;
	else
		comments = 0;
	}
	else
		if(buffer[i] == '/')
	{
	//print("inside");
	//check buffer i+1 and '/', then is comment and skip if i+1!=n
	//check if at end of buffer
	
	{
	if(buffer[i+1] == '/')
	{
	++i;
	comments = 1;
	continue;
	}
	}
	}
	else
		putchar(buffer[i]);
		}
		printf("\n");
}

