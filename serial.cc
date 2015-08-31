#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <iostream>
#include "serial.hh"

int DGserial::open_device(std::string devname)
{
	fd = open(devname.c_str(), O_RDWR | O_NOCTTY | O_NDELAY);
	if(fd == -1){
		perror("Can't Open Serial Port");
		return -1;
	}
	return fd;
}

void DGserial::send_command(std::string command)
{
	std::string cmd = command;
	cmd.push_back('\n');
	std::cout << "send: " << cmd << std::endl;
	write(fd,cmd.c_str(),cmd.length());
	sleep(1);
}

void DGserial::read_message(int length)
{
	char *buffer = new char[length];
	int actual_len = read(fd, buffer, length);
	buffer[actual_len]=0;
	printf("Read: %d bytes: %s\n",actual_len,buffer);
}


