#include <stdio.h>
#include <string.h>

void add(int x, int y) {
	int sum;
	sum = x + y;
	printf("%d + %d = %d\n", x, y, sum);
	return;
}

void fillbuff(char *s) {
	char buff[128];
	strcpy(s, buff);
	return;
}

int main(int argc, char *argv[]) {
	printf("[\t\tAddress of <add>\t\t] = %p\n", &add);
	printf("[\t\tAddress of <fillbuff>\t\t] = %p\n", &fillbuff);
	add(1,2);
	fillbuff(argv[1]);
	return 0;
}
