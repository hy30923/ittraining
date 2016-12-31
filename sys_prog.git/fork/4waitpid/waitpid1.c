#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	int ret, status;

	ret = fork();

	if (ret == 0) { 	//child
		sleep(2);
		exit(3);
	} else {		// pararnt
		printf("this is parart: ret: %d\n", ret);
		waitpid(ret, &status, 0);
		printf("child pid: %d already finish status: %d\n", ret, status);
	}
}
