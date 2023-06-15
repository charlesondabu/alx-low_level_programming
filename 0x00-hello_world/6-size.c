#include<stdio.h>

int main(void){
	int a;
	long long int b;
	long int c;
	float d;
	char e;

	printf("Size of a char: %d byte(s)\n",&e);
	printf("Size of an int: %d byte(s)\n",&e);
	printf("Size of a long int: %d byte(s)\n",&c);
	printf("Size of a long long int: %d byte(s)\n",&b);
	printf("Size of a float: %d byte(s)\n", &d);

	return 0;
}
