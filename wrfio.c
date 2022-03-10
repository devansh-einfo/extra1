#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int fd, len;
	int x;
	char write_buf[60] = "Linux kernel";
	char read_buf[60];
	fd = open("linuxa3.txt", O_CREAT | O_RDWR, 0777);
	len = write(fd, write_buf, 60);
	printf("Return = %d", len);
//Using Lseek function to reset offset to beginning	
	lseek(fd, 0 , SEEK_SET);

	read(fd,read_buf,len);
	printf("\nRead=%s", read_buf);

	close(fd);
}
