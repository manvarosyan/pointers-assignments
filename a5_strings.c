#include <stdio.h>

int main(void) {
    char str[] = "Hello";
    char *p = str;

    puts("Print with pointer:");
    while (*p != '\0') {
        putchar(*p);
        p++;              
    }
    putchar('\n');

    char *start = str;
    char *q = str;
    while (*q != '\0')
	    q++;
    size_t len = (size_t)(q - start);

    printf("Length counted with pointers: %zu\n", len);
    return 0;
}

