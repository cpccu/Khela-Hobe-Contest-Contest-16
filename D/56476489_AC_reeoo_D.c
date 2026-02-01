#include <stdio.h>

int main() {
    int n, i,X,Y;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &X, &Y);

        if (X > 10 * Y) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}