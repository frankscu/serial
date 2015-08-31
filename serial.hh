#ifndef DGSERIAL_HH
#define DGSERIAL_HH

#include <string>

class DGserial{

	public:
		int open_device(std::string);
		void send_command(std::string);
		void read_message(int length);

	private:
		int fd;
		std::string devname;
};

#endif
