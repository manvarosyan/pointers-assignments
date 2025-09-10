#include <stdio.h>

int main(void) {
	int x = 22;
	int *px = &x;

	printf("x = %d\n", x);
	printf("The address of x (&x): %p\n", (void*)&x);
        printf("The address stored in px: %p\n", (void*)px);
	printf("The value via *px: %d\n", *px);

        *px = 99;
        printf("New x: %d\n", x);
	return 0;
}
