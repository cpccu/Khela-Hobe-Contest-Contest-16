#include <stdio.h>

int main() {
    int T, A, B, C, max;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &A, &B, &C);

       
        max = A;
        if (B > max) {
            max = B;
        }
        if (C > max) {
            max = C;
        }

       
        if (max == A) {
            printf("Alice\n");
        } else if (max == B) {
            printf("Bob\n");
        } else {
            printf("Charlie\n");
        }
    }

    return 0;
}