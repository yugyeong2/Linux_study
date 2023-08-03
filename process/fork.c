#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {
	int pid;

	if ((pid = fork()) == 0)
		/*child*/
		printf("child of %d is %d\n", getppid(), getpid());
	else
		/*parent*/
		printf("I am %d. My child is %d\n", getpid(), pid);

	return 0;
}
