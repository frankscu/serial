#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <errno.h>
#include <string.h>

int OpenDev(char *Dev)
{
	int fd;
	fd = open(Dev, O_RDWR);
	if(fd == -1)
	{
		perror("Can't Open Serial Port");
		return -1;
	}
	else
		return fd;
}

int main()
{
	int fd;
	char buffer[4000];
	int actual;
	char *dev="/dev/usbtmc0";
	fd=OpenDev(dev);
	if(fd>0)
	{
		//write(fd,"*RST\n",5);
		const char *command;
		int len;
		command=":SOUR1:APPL:SIN 500,1.5,1,45";	
		len=strlen(command);
		write(fd,command,len);
		//write(fd,"*IDN?",6);
		//write(fd,":SOUR1:APPL:SIN 500,2.5,1,90",6);	
		//write(fd,":OUTP1 ON",6);
		//actual=read(fd, buffer, 4000);
		//buffer[actual]=0;
		//printf("response:\n%s\n", buffer);
		close(fd);
	}
}

