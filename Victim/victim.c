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
	somefunc(5);
	return 0;
}

int somefunc(int x){
	
	printf("I am now in function somefunc\n");
	int sum = x + 1;
	printf("Sum is %d\n",sum);
	return sum;
}
	

