int main()
{
	DGserial DG;
	std::string devname, command;
	int length;	
	devname="/dev/usbtmc0";	
	//command=":SOUR1:APPL:SIN 500,1.5,1,45";
	command="*IDN?";
	length=4000;
	int fd;
	fd = DG.open_device(devname);
	if(fd>0){
		DG.send_command(command);
		DG.read_message(length);
	}
	return 0;
}

