#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
       

        int arr[3];
        int max = 0;
        
        for (int i = 0; i < 3; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] > arr[max]) {
                max = i;
            }
        }

       

        switch (max) {
            case 0:
                printf("Alice\n");
                break;
            case 1:
                printf("Bob\n");
                break;
            case 2:
                printf("Charlie\n");
                break;
    
        }
    }
    
    return 0;
}
