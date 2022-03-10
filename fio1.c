#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int fd;
	int x;
	char write_buf[60] ="abcdessgfc";
	char read_buf[60];
	fd = open("linux15.txt", O_CREAT | O_RDWR, 0777);
	write(fd, write_buf, 60);
	read(fd,read_buf,60);
	fd = open("linux16.txt", O_CREAT | O_RDWR, 0777);
	write(fd, write_buf, 60);
	close(fd);
	return 0;

}

