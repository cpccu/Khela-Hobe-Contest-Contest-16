#include <stdio.h>

int main() {
    int T, X, Y;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &X, &Y);

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