#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int x1,y1,x2,y2;
        scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
        int res1 = x1 + y1;
        int res2 = x2 + y2;
        if (res1 > res2) {
            printf("%d\n",res2);
        }else if(res1 == res2){
            printf("%d\n",res1);
        }else{
            printf("%d\n",res1);
        }
    }

    return 0;
}