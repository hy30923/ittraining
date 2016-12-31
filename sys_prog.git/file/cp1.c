#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fd;
	FILE *fd2;
	char buf[128];

	fd = fopen("/etc/passwd", "r");
	fd2 = fopen("/tmp/passwd", "w");

	if (fd == NULL || fd2 == NULL) {
		perror("fopen err");
		return 1;
	}

	printf("fd = %p\n", fd);
	while (fgets(buf, 128, fd) != NULL) {
		printf("%s\n", buf);
		fputs(buf, fd2);
	}
	fclose(fd);
	fclose(fd2);
}
