#include <stdlib.h>
#include <syscall.h>
int main(int argc, char* argv[], char* envp[]) {
	int counter = 0;
	while(counter++ < 5){
		uprintf("Hello!\n");
		yield();
	}
	return 0;
}
