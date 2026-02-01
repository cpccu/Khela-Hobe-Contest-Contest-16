#include <stdio.h>

int main() {
    int X, N, M; // X = Om's money, N = laptop price, M = Gymkhana fund
    scanf("%d %d %d", &X, &N, &M);

    // Check if the total money Om has is enough to buy the laptop
    if (X + M >= N) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}