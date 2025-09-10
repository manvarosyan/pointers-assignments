#include <stdio.h>

void swap(int *a, int *b){
	if (!a || !b) 
		return;
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void) {
	int a = 22;
	int b = 99;
	printf("Before swap: a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("After swap: a = %d, b = %d\n", a, b);
	return 0;
}
