#include <stdio.h>

int main(void) {
	int arr[5] = {5, 10, 15, 20, 25};
	int *p = arr;

	for(int i = 0; i < 5; i++) {
		printf("*(p + %d) = %d\n", i, *(p+i));
	}

        for(int i = 0; i < 5; i++) {
                *(p+i) = *(p+i) + i;
        } 


	puts("Modified array via pointer:");
        for (int i = 0; i < 5; i++) {
                printf("*(p + %d) = %d\n", i, *(p + i));
        }


        puts("Modified array via array name:");
        for (int i = 0; i < 5; i++) {
                 printf("arr[%d] = %d\n", i, arr[i]);
         } 
         return 0;
 }	
