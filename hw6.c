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
	int fd = open(argv[1], O_RDONLY);
	if(fd < 0)
	{
		printf("Cannot open file for writing\n");
		return -2;
	}
	//read entire content of file
	if(n = read(fd, buffer, sizeof(buffer))) < 0);
	{
		printf("Error reading file\n");
		return -2;
	}
	buffer[n] = '\0';
	//close file
	close(fd);
	//convert each char in buffer to uppercase
	for(i = 0; i < n; i++)
	{
		//convert all char to uppercae
		buffer[i]=toupper(buffer[i]);
	}
	//open file for writing and then close
	fd = open(argv[1], O_WRONLY);
	//check if file can be opened
	if(fd < 0)
	{
		printf("Cannot open file for writing\n");
		return -3;
	}
	//writer buffer to file
	write(fd, buffer, strlen(buffer));
	close(fd);
}
	
