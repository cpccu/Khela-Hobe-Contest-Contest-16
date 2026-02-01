#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a > b && a > c) {
            printf("ALICE\n");
        } else if(b > a && b > c){
            printf("BOB\n");
        }else{
            printf("CHARLIE\n");
        }
    }

    return 0;
}