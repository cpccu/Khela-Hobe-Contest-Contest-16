#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N; 
        scanf("%d", &N);

        double sum = 0.0, grade;
        for (int i = 0; i < N; i++) {
            scanf("%lf", &grade); 
            sum += grade;
        }

        double GPA = sum / N; 
        printf("Case %d: %.3lf\n", t, GPA); 
    }

    return 0;
}
