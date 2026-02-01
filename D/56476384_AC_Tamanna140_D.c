#include <stdio.h>

int main() {
    int T, X, Y;

    // Read the number of test cases
    scanf("%d", &T);

    // Loop over each test case
    for (int i = 0; i < T; i++) {
        // Read following count (X) and follower count (Y)
        scanf("%d %d", &X, &Y);

        // Check if the account is spam
        if (X > 10 * Y) {
            printf("YES\n");  // Account is spam
        } else {
            printf("NO\n");  // Account is not spam
        }
    }

    return 0;
}