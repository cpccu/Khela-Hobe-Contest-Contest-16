#include <stdio.h>

int main() {
    int X1, Y1, X2, Y2;
    int T1, T2;
    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf("%d%d", &X1, &Y1);
        scanf("%d%d", &X2, &Y2);

        T1 = X1 + Y1;
        T2 = X2 + Y2;

        if (T1 < T2) {
            printf("%d\n", T1);
        } else if (T2 < T1) {
            printf("%d\n", T2);
        } else {
            printf("%d\n", T1);
        }
    }

    return 0;
}
