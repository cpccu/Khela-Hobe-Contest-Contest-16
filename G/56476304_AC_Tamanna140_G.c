#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    // Loop through each test case
    while (T--) {
        int A, B, C; // Bids of Alice, Bob, and Charlie
        scanf("%d %d %d", &A, &B, &C);

        // Compare the bids and determine the winner
        if (A > B && A > C) {
            printf("Alice\n");
        } else if (B > A && B > C) {
            printf("Bob\n");
        } else {
            printf("Charlie\n");
        }
    }

    return 0;
}