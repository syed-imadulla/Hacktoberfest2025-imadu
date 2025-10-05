#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for printing all rows
    for (int i = 0; i < rows; i++) {

        // First Inner loop for 
        // printing white spaces
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }

        // Second inner loop 
        // for printing star *
        for (int k = 0; k < rows - i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
