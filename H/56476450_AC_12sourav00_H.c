#include <stdio.h>

int main() {
    int T, A, B, C, X;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d %d", &A, &B, &C, &X);

        // Check if any two of them can afford the subscription
        if (A + B >= X || A + C >= X || B + C >= X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}