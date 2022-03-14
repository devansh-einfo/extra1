#include<stdio.h>
#include<stdlib.h>

void one(void){
	printf("ONE\n");
}
void two(void){
	printf("TWO\n");
}
void three(void){
	printf("THREE\n");
}
int main(){
	printf("CAllback registration\n");
	atexit(one);
	atexit(two);
	atexit(three);
	exit(0);
}
