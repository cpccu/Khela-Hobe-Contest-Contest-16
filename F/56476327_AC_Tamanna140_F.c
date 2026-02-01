#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    // Loop through each test case
    while (T--) {
        int X; // Duration of the lecture
        scanf("%d", &X);

        // Check if the duration exceeds 30 minutes
        if (X > 30) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}