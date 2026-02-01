#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y; // Prices of the first and second cab services
        scanf("%d %d", &X, &Y);

        // Compare the prices and print the result
        if (X < Y) {
            printf("FIRST\n");
        } else if (X > Y) {
            printf("SECOND\n");
        } else {
            printf("ANY\n");
        }
    }

    return 0;
}