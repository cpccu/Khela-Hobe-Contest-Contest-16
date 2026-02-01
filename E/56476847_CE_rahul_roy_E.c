#include <stdio.h>


int number_of_students(){
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

    return ch == 'b' ? bSum : gSum;
}

int main() {
    int sum = number_of_students();
    printf("%d\n",sum);
    
    return 0;
}
