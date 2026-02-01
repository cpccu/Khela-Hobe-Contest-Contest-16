#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int bSum = 0, gSum = 0;

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        if (i % 2 == 0) {
            bSum += n;
        } else {
            gSum += n;
        }
    }

    char ch;
    scanf(" %c", &ch);

    printf("%d\n", ch == 'b' ? bSum : gSum);
    
    return 0;
}
