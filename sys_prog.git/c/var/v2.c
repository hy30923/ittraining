#include <stdio.h>
int main()
{
	struct cube{
		int x;
		int y;
		int h;
	};
	//struct cube cb;
	//struct cube *p;
	//cb.x = 8;
	//p = &cb;
	printf("sizoef cube: %d\n", sizeof(struct cube));
	//printf("sizoef cb: %d, sizeof p: %d\n", sizeof(cb), sizeof(p));
}
