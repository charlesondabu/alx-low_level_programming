#include <stdio.h>

int main(void)
{
    int a;
    long long int b;
    long int c;
    float d;
    char e;

    printf("Size of a char: %lu byte(s)\n", sizeof(e));
    printf("Size of an int: %lu byte(s)\n", sizeof(a));
    printf("Size of a long int: %lu byte(s)\n", sizeof(c));
    printf("Size of a long long int: %lu byte(s)\n", sizeof(b));
    printf("Size of a float: %lu byte(s)\n", sizeof(d));

    return 0;
}
