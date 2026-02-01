#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    // Loop through each test case
    while (T--) {
        int A, B, C, X; // Amount Alice, Bob, and Charlie have, and the cost of the Netflix subscription
        scanf("%d %d %d %d", &A, &B, &C, &X);
        
        // Check if any two can contribute to buy the subscription
        if ((A + B >= X) || (A + C >= X) || (B + C >= X)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}