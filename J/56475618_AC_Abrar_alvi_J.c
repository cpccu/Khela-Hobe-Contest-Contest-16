#include <stdio.h>
int main(){
    int t,x,y,c;
    scanf("%d",&t);
for(int i=0;i<t;i++){
    scanf("%d %d",&x,&y);
    if(x < y){
         printf("\nFIRST");
    }else if(x == y){
         printf("\nANY");
    }else{ printf("\nSECOND");}
}
    
return 0;
}