#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#include<fcntl.h>

char buf1[] = "Devansh";
char buf2[] = "Assignment";

int main(void){
	int fd;
	fd = creat("file5.txt",0777);
	write(fd, buf1, sizeof(buf1));
	lseek(fd,4096,SEEK_SET);
	write(fd, buf2, sizeof(buf2));
}
