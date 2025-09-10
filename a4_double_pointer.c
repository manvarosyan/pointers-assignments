#include <stdio.h>

int main(void) {
    int x = 23;
    int *px = &x; 
    int **ppx = &px; 

    printf("Value via *px      = %d\n", *px);
    printf("Value via **ppx    = %d\n", **ppx);
    
    **ppx = 45;
    printf("After **ppx = 45, x = %d\n", x);

    return 0;
}
