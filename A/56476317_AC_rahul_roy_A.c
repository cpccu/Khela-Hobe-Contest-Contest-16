#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {

        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);

        int x = a+b;
        int y = c+d;
        
        if(x>y){
            printf("%d\n",y);
        }else{
            printf("%d\n",x);
        }
        
        
    }
    
    return 0;
}
