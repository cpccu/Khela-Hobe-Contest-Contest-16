#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  
    
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);  
        
        double sum = 0.0;
        

        for (int i = 0; i < N; i++) {
            double p;
            scanf("%lf", &p);
            sum += p;
        }
        

        double GPA = sum / N;
    
        printf("Case %d: %.3f\n", t, GPA);
    }
    
    return 0;
}
