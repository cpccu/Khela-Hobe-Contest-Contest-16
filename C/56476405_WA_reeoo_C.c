#include <stdio.h>

int main() {
    int t, n, i, j;
    float grade, credit, tg, tc, GPA;

    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        tg = 0;
        tc = 0;

        scanf("%d", &n);

        for (j = 0; j < n; j++) {
            scanf("%f %f", &grade, &credit);
           tg += grade * credit;
            tc += credit;
        }

        GPA = tg / tc;
        printf("Case %d: %.3f\n", i, GPA);
    }

    return 0;
}
